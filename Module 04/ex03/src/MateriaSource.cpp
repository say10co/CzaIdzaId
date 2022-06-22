#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
	:__nb_materias(0)
{
	for (int i = 0; i < __max_materias; i++)
		__materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < __nb_materias; i++)
		delete __materias[i];
}

MateriaSource::MateriaSource(const MateriaSource & materiasource)
	:__nb_materias(0)
{
	for (int i = 0; i < __max_materias; i++)
		__materias[i] = NULL;
	*this = materiasource;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & materiasource)
{
	this->__nb_materias = materiasource.__nb_materias;
	for (int i = 0; i < __max_materias; i++)
	{
		if (__materias[i])
		{
			delete __materias[i];
			__materias[i] = NULL;
		}
		if (materiasource.__materias[i])
			__materias[i] = (materiasource.__materias[i])->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->__nb_materias != __max_materias)
	{
		this->__nb_materias++;
		this->__materias[this->__nb_materias -1] = m->clone();
	}	
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->__nb_materias; i++)
	{
		if (this->__materias[i]->getType() == type)
			return (__materias[i]->clone());
	}
	return (0);
}
