#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	const Animal	&doggy = *dog;
	const Animal	&kitty = *cat;

	std::cout << "---------------------" << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << doggy.getType() << " " << std::endl;
	std::cout << kitty.getType() << " " << std::endl;

	std::cout << "---------------------" << std::endl;

	//calling virtual function from pointer to base class
	cat->makeSound();
	dog->makeSound();

	// calloing virtual function from refrence to base class
	kitty.makeSound();
	doggy.makeSound();

	meta->makeSound();

	std::cout << "---------------------" << std::endl;

	// calling virtual distructor on polimorphic class
	delete meta;
	delete dog;
	delete cat;

	std::cout <<  "-------Additional test------" << std::endl;
	{
		const WrongAnimal * Wanimal = new WrongCat();
		const WrongAnimal Wanimal1;

		std::cout << "---------------------" << std::endl;

		Wanimal->makeSound();
		Wanimal1.makeSound();

		std::cout << "---------------------" << std::endl;

		delete Wanimal;
	}
	return 0;
}
