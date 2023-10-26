    #include <iostream>

using namespace std;
class Pet {
    protected: string name;
    public: 	
    // Pet(string n)
    // { 
    //     this -> name = n; 
    // }
    Pet(string name) : name(name) {}
    virtual void make_sound()
    { 
        cout << name << " is silent :(" << endl; 
    }
    void run()
    { 
        cout << name << ": I'm running" << endl; 
    }
};

class Pete {
protected:
	string name;
public:
	void name_me(string name)
	{ 
		this -> name = name; 
	}

    	void make_sound()
	{ 
		cout << name << " says: no comments" << endl; 
	}
};


void play_with_pet_by_pointer(string name, Pete *pet)
{
	pet -> name_me(name);
	pet -> make_sound();
}

void play_with_pet_by_reference(string name, Pete &pet)
{
	pet.name_me(name);
	pet.make_sound();
}


class Dog : public Pet {
public:
	Dog(string n) : Pet(n) {};
	void make_sound()
    { 
        cout << name << ": Woof! Woof!" << endl; 
    }
};

class Cat : public Pet {
public:
	Cat(string n) : Pet(n) {};
	void make_sound() 
    { 
        cout << name << ": Meow! Meow!" << endl; 
    }
};

class RelationalClass : public Cat {
public:
	RelationalClass(string n) : Cat(n) {};
};

class RelationalClass2 : public Dog {
public:
	RelationalClass2(string n) : Dog(n) {};
};

class GermanShepherd : public Dog {
public:
    GermanShepherd(string name) : Dog(name) {}
    void make_sound()
    {
        cout << name << " says: Wuff!" << endl; 
    }
    void laufen()
    { 
        cout << name << " runs (shepherd)!" << endl; 
    }
};

class MastinEspanol : public Dog {
public:
    MastinEspanol(string name) : Dog(name) {}
    void make_sound()
    { 
        cout << name << " says: Guau!" << endl; 
    }
    void ejecutar()
    { 
        cout << name << " runs (mastin)!" << endl; 
    }
};


void play_with_pet(Pet *pet)
{
    pet -> make_sound();
    GermanShepherd *shepherd = dynamic_cast<GermanShepherd *>(pet);
    if(shepherd != nullptr)
        shepherd -> laufen();
    MastinEspanol *mastin = dynamic_cast<MastinEspanol *>(pet);    
    if(mastin != nullptr)
        mastin -> ejecutar();
}

void play_with_pet_static(Pet &pet)
{
    pet.make_sound();
    	try {
		dynamic_cast<GermanShepherd &>(pet).laufen();
	} 
	catch(...) {}
	try {
		dynamic_cast<MastinEspanol &>(pet).ejecutar();
	}
	catch(...) {}
}

int main()
{

    Pete *p1  = new Pete();
	Pete  p2;

	play_with_pet_by_pointer("anonymous", p1);
	play_with_pet_by_reference("no_name", p2);
	play_with_pet_by_pointer("no_name", &p2);
	play_with_pet_by_reference("anonymous", *p1);

    Pet *b_pet;
    RelationalClass *a_pets;
    RelationalClass2 *c_pets;

    b_pet  = c_pets = new RelationalClass2("Classe Relacional 2 entre super e sub class");
	c_pets -> make_sound();
    static_cast<RelationalClass2 *>(b_pet) -> make_sound();
	
    
	b_pet = a_pets  = new RelationalClass("Classe Relacional entre super e sub class");
	a_pets -> make_sound();
    static_cast<RelationalClass *>(b_pet) -> make_sound();

	Pet a_pet("pet");
	Cat a_cat("Tom");
	Dog a_dog("Spike");

    Pet *a_pet2 = new Cat("pet2");
	a_pet.run();
	a_dog.run(); a_dog.make_sound();
	a_cat.run(); a_cat.make_sound();
    static_cast<Cat *>(a_pet2) -> make_sound();
    static_cast<Cat *>(a_pet2) -> run();

    Pet *pet                 = new Pet("creature");
    Dog *dog                 = new Dog("Dog");
    GermanShepherd *shepherd = new GermanShepherd("Hund");
    MastinEspanol  *mastin   = new MastinEspanol("Perro");

    Pet pet_statics("creature");
    Dog dog_statics("Dog");
    GermanShepherd shepherd_statics("Hund");
    MastinEspanol mastin_statics("Perro");
    
     cout << "dynamic" <<endl;

    play_with_pet(pet);
    play_with_pet(dog);
    play_with_pet(shepherd);
    play_with_pet(mastin);
    
    cout << "static" <<endl;

    play_with_pet_static(pet_statics);
    play_with_pet_static(dog_statics);
    play_with_pet_static(shepherd_statics);
    play_with_pet_static(mastin_statics);
}