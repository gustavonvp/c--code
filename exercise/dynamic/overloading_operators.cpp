#include <iostream>
#include <array>
template <typename T, size_t R, size_t C>
struct matrix
{
   T& operator()(size_t const r, size_t const c) noexcept
   {
      return data_[r * C + c];
   }
   T const & operator()(size_t const r, size_t const c) const noexcept
   {
      return data_[r * C + c];
   }
   static constexpr size_t Rows = R;
   static constexpr size_t Columns = C;
private:
   std::array<T, R* C> data_;
};
int main()
{
   matrix<int, 2, 3> m;
   for (size_t i = 0; i < m.Rows; ++i)
   {
      for (size_t j = 0; j < m.Columns; ++j)
      {
         m(i, j) = i * m.Columns + (j + 1);
      }
   }
   for (size_t i = 0; i < m.Rows; ++i)
   {
      for (size_t j = 0; j < m.Columns; ++j)
      {
         std::cout << m(i, j) << ' ';
      }
      std::cout << '\n';
   }
}