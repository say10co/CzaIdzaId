#include "../inc/Intern.hpp" 

int main()
{
		{
				Intern someRandomIntern;
				Form* rrf;
				rrf = someRandomIntern.makeForm("robotomy request", "Bender");
				std::cout << rrf->getName() << std::endl;
				std::cout << *rrf << std::endl;
				std::cout << rrf->getTarget() << std::endl;
		}

}
