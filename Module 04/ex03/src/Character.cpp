
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
	:__name(name), __nb_materias(0)
{
	for (int i = 0; i < this->__max_materias; i++)
		this->__inventory[i] = NULL;
}

Character::Character(const Character & character)
	//:Character()
{
	for (int i = 0; i < this->__max_materias; i++)
		this->__inventory[i] = NULL;
	*this = character;
}

Character &Character::operator=(const Character & character)
{
	this->__name = character.__name;
	this->__nb_materias = character.__nb_materias;

	for (int i = 0; i < this->__max_materias; i++)
	{

		if (this->__inventory[i])
		{
			delete this->__inventory[i];
			__inventory[i] = NULL;
		}
		if (character.__inventory[i])
			this->__inventory[i] = (character.__inventory[i])->clone();
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
		this->__nb_materias++;
		this->__inventory[__nb_materias - 1] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->__nb_materias)
	{
		this->__inventory[idx] = NULL;
		for (int i = idx ; i < __nb_materias - 1; i++)
			swap(&__inventory[i], &__inventory[i + 1]);
		this->__nb_materias--;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->__nb_materias)
	{
		this->__inventory[idx]->use(target);
	}	
}

void	Character::swap(AMateria **p, AMateria **n)
{
	AMateria *tmp;

	tmp = *p;

	*p = *n;
	*n = tmp;
}	

AMateria *Character::getAddressOf(const int idx) 
{
	if (idx >= 0 && idx < this->__nb_materias)
		return (this->__inventory[idx]);
	return (0);
}
