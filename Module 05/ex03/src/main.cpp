#include "../inc/Intern.hpp" 

int main()
{

	Intern someRandomIntern;
	Form	*rrf;
	Form	 *p;
	Form	*s;
	Form	*s_nulll;
	Form	*r;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf->getName() << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << rrf->getTarget() << std::endl;
		delete rrf;
		
		p = someRandomIntern.makeForm("presidential pardon", "Pardon");	
		std::cout << p->getName() << std::endl;
		std::cout << *p << std::endl;
		std::cout << p->getTarget() << std::endl;
		delete p;

		s = someRandomIntern.makeForm("shrubbery creation", "Shrubery");
		std::cout << s->getName() << std::endl;
		std::cout << *s << std::endl;
		std::cout << s->getTarget() << std::endl;
		delete s;

		s_nulll = someRandomIntern.makeForm("Imaginarry Form", "who?");
		std::cout << s_nulll->getName() << std::endl;
		std::cout << *s_nulll << std::endl;
		std::cout << s_nulll->getTarget() << std::endl;
		delete s_nulll;

		r = someRandomIntern.makeForm("robotomy request", "Robotonom");
		std::cout << r->getName() << std::endl;
		std::cout << *r << std::endl;
		std::cout << r->getTarget() << std::endl;
		delete r;

	}
	catch(const std::exception &e)
	{
		std::cout << CYAN << e.what()  << DEFAULT << std::endl;
	}
}
