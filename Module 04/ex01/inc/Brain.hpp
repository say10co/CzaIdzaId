#ifndef BRAIN_HPP
# define BRAIN_HPP 

#include <iostream>

class Brain
{
	private:
		std::string *__ideas;
		int	__nbideas;

	public:
		Brain();
		~Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain & brain);

		void	set_idea(const std::string &idea);
		void	get_ideas(void) const;

};

#endif /* BRAIN_HPP */
