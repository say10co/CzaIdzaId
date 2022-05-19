#include <iostream>
#include "Account.hpp"

//initialising static member varivbles
int	Account::_nbAccounts  = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;



//Account constructor
Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;	
	_amount = initial_deposit;
	_totalAmount += initial_deposit; 
	std::cout << "Time Stamp ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created;" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "Time Stamp ";
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}
void	Account::displayStatus(void) const
{
	std::cout << "Time Stamp ";
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
	std::cout << "Time Stamp ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "Time Stamp ";
	if (_amount < withdrawal)
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
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	return (0);

}

Account::~Account()
{	
	std::cout << "Time Stamp ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed;" << std::endl;
}
/*
int	Account::getNbDeposits(void)
{
	return (Account::_nbDeposits);
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
	return (Account::_nbWithdrawals);
}
*/
