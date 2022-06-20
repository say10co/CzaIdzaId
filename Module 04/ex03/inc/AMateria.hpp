#ifndef AMATERIA_HPP
# define AMATERIA_HPP 
class AMateria
{
	protected:
		std::string __type;

	public:
		AMateria();
		~AMateria();
		AMateria(std::string const & type);
		AMateria &operator=(const AMateria & amateria);

		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

};

#endif /* AMATERIA_HPP */
