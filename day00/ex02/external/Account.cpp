#include <iostream>
#include "Account.hpp"


Account::Account( int initial_deposit )
{
	(void) initial_deposit;
  	std::cout << "Time Stamp" << " index:" << _accountIndex++ << std::endl;
}
Account::~Account()
{
	std::cout << "distroyed" << std::endl;
}
