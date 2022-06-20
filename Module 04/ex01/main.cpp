#include "ex00/inc/Animal.hpp"
#include "ex00/inc/Cat.hpp"
#include "ex00/inc/Dog.hpp"
#include "inc/Brain.hpp"
#include <iostream>
int main()
{
	Cat *cat = new Cat();
	Cat *cat1 = new Cat();

	std::string food = std::string("Food");

	cat->think(food);
	cat = cat1;
	
	delete cat;
	delete cat1;
}
