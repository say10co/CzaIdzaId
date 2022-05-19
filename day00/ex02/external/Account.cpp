#include <iostream>
#include "Account.hpp"

//initialising static member varivbles
int	Account::_nbAccounts  = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
	return ;
	std::time_t time;

	std::time(&time);
	std::tm *now	= std::localtime(&time);
	std::cout << "[" << now->tm_year + 1900 << now->tm_mon 
	<< now->tm_mday << "_" << now->tm_hour << now->tm_min 
	<< now->tm_sec << "] ";

}

Account::Account( int initial_deposit )
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;	
	_amount = initial_deposit;
	_totalAmount += initial_deposit; 
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	 Account::makeDeposit( int deposit )
{
	_amount += deposit;	
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;

}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (1);
	}
	_amount -= withdrawal;	
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	_nbWithdrawals += 1;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount +  withdrawal << ";";
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbDeposits << std::endl;
	return (0);
}

Account::~Account()
{	
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbDeposits(void)
{
		return (Account::_totalNbDeposits);
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

