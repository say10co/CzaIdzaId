
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria * __materias[4];
		int	 __nb_materias;
		static const int __max_materias = 4;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & materiasource);
		MateriaSource &operator=(const MateriaSource & materiasource);
		~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif //MATERIASOURCE_HPP
