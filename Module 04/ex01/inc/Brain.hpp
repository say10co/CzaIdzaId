#ifndef BRAIN_HPP
# define BRAIN_HPP 

#include <iostream>

class Brain
{
	private:
		std::string *__ideas;
	public:
		Brain();
		~Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain & brain);



};

#endif /* BRAIN_HPP */
