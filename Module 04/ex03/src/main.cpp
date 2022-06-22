#include "../inc/MateriaSource.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

#include "../inc/Character.hpp"

int main()
{
	
	std::cout << "--------IMateriaSource interface-----------" << std::endl;
	{	
		MateriaSource * org_materia = new MateriaSource();
		MateriaSource * copy_materia = new MateriaSource();
		AMateria *m;

		org_materia->learnMateria(new Ice());
		org_materia->learnMateria(new Ice());
		org_materia->learnMateria(new Ice());
		*copy_materia = *org_materia;

		MateriaSource * copy_materia1 = new MateriaSource(*copy_materia);

		copy_materia1->learnMateria(new Cure());
		m = copy_materia1->createMateria("cure");
		if (m)
			std::cout << m->getType() << std::endl;
		else
			std::cout << "Materia not found" << std::endl;
		
		delete org_materia;
		delete copy_materia;
		delete copy_materia1;
	}
	
	std::cout << "---------ICharacter interface--------------" << std::endl;
	{
		ICharacter * c = new Character("JTFU");
		AMateria *tmp_;


		std::cout << "ICharacter c's name : " << c->getName() << std::endl;

		c->equip(new Cure());
		c->equip(new Cure());
		c->equip(new Cure());
		c->equip(new Ice());

		ICharacter	*c_cp = new Character(*(static_cast<Character *>(c)));
		Character 	*c_cp_casted  = static_cast<Character *>(c_cp) ;

		std::cout << "Character copy of C's name : " << c->getName() << std::endl;
		std::cout << std::endl;

		c->use(2, *c);
		c->unequip(2);
		c->use(2, *c);

		std::cout << std::endl;

		c_cp->use(2, *c);
		tmp_ = c_cp_casted->getAddressOf(2);
		c_cp->unequip(2);
		c_cp->use(2, *c);

		delete c;
		delete c_cp;
		delete tmp_;
		
	
	}
	std::cout << "\n---------- Project's test code -------------" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete src;
		delete bob;
		delete me;
	}
		
	//system("leaks ex03");
	return 0;
}
