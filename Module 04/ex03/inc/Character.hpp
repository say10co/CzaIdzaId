
#ifndef	CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp" 

class Character: public ICharacter
{
	private:
		std::string __name;
		AMateria *__inventory[4];
		int	__nb_materias;
		static const int __max_materias = 4;

		void	swap(AMateria **p, AMateria **n);
	public:
		Character();
		Character(const Character & caracter);
		Character(const std::string &name);
		Character &operator=(const Character &caracter);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx) ;
		void use(int idx, ICharacter& target);
		AMateria *getAddressOf(const int idx);

};

#endif //Character_HPP
