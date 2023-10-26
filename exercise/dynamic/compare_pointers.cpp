#include <cassert>
#include <compare>
#include <set>
#include <string>
 
struct Base
{
    std::string zip;
    auto operator<=>(const Base&) const = default;
};
 
struct TotallyOrdered : Base
{
    std::string tax_id;
    std::string first_name;
    std::string last_name;
public:
    // custom operator<=> because we want to compare last names first:
    std::strong_ordering operator<=>(const TotallyOrdered& that) const
    {
        if (auto cmp = (Base&)(*this) <=> (Base&)that; cmp != 0)
            return cmp;
        if (auto cmp = last_name <=> that.last_name; cmp != 0)
            return cmp;
        if (auto cmp = first_name <=> that.first_name; cmp != 0)
            return cmp;
        return tax_id <=> that.tax_id;
    }
    // ... non-comparison functions ...
};
// compiler generates all four relational operators
 
int main()
{
    TotallyOrdered to1{"a", "b", "c", "d"}, to2{"a", "b", "d", "c"};
    std::set<TotallyOrdered> s; // OK
    s.insert(to1); // OK
    assert(to2 <= to1); // OK, single call to <=>
}