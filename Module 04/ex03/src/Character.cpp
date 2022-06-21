
#include "../inc/Character.hpp"


Character::Character()
	:__name("Character"), __nb_materias(0)
{
	for (int i = 0; i < this->__max_materias; i++)
		__inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < __nb_materias; i++)
	{
		if (__inventory[i])
			delete this->__inventory[i];
	}
}

Character::Character(const std::string &name)
	:__name(name) //Character()
{
}

Character::Character(const Character & character)
	//:Character()
{
	*this = character;
}

Character &Character::operator=(const Character & character)
{
	this->__name = character.__name;
	this->__nb_materias = character.__nb_materias;

	for (int i = 0; i < this->__max_materias; i++)
	{
		if (this->__inventory[i])
			delete this->__inventory[i];
		this->__inventory[i] = character.__inventory[i];
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->__name);
}

void	Character::equip(AMateria *m)
{
	if (this->__nb_materias != this->__max_materias)
	{
		this->__inventory[__nb_materias - 1] = m;
		this->__nb_materias++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->__nb_materias)
	{
		this->__nb_materias--;
		this->__inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->__nb_materias)
	{
		this->__inventory[idx]->use(target);
	}	
}
