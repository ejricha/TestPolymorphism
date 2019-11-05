// main.cpp
//
// Main function, create some Animals

#include "Animal.h"

namespace test
{

// Function to print an Animal
void PrintAnimal(const toolbox::Animal* a)
{
	std::cout << a->Info() << "\n";
}
// Pass-by-reference works fine too
void PrintAnimal(const toolbox::Animal& a)
{
	std::cout << a.Info() << "\n";
}
// Pass-by-value is prone to slicing,
//  plus it is abstract anyway so it is illegal
/*
void PrintAnimal(const toolbox::Animal a)
{
	std::cout << a.Info() << "\n";
}
*/

// Run the tests
int TestAnimals()
{
	using namespace toolbox;

	Cat c1("adam", "black", false);
	PrintAnimal(&c1);
	PrintAnimal(c1);

	Cat c2("beatrice", "brown", true);
	c2.SetNumWhiskers(53);
	PrintAnimal(&c2);
	PrintAnimal(c2);

	Fish f1("cathy", "red");
	PrintAnimal(&f1);
	PrintAnimal(f1);

	Fish f2("doug", "blue");
	f2.SetHasScales(false);
	PrintAnimal(&f2);
	PrintAnimal(f2);
	
	Fish f3("eric", "green");
	f3.SetHasScales(true);
	PrintAnimal(&f3);
	PrintAnimal(f3);

	Octopus o1("fred", "invisible");
	PrintAnimal(&o1);
	PrintAnimal(o1);

	return EXIT_SUCCESS;
}

} // namespace test

int main()
{
	return test::TestAnimals();
}
