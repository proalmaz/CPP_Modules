#include "Account.hpp"
#include <string>
#include <ctime>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initialDeposits)
{
	static int index = 0;
	_accountIndex = index++;
	_amount = initialDeposits;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";" << "created" << endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts << ";total:" <<
	_totalAmount << ";deposits:" << _totalNbDeposits <<
	";withdrawals:" << _totalNbWithdrawals << endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount <<
	";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	cout << ";deposit:" << deposit << ";amount:" << _amount <<
	";nb_deposits:" << _nbDeposits << endl;
}

Account::~Account()
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";" << "closed" << endl;
}

void Account::_displayTimestamp()
{
	time_t	currentTime;
	struct	tm *localDateTime;
	char	buf[20];

	time(&currentTime);
	localDateTime = localtime(&currentTime);
	strftime(buf, sizeof (buf), "[%Y%m%d_%H%M%S]", localDateTime);
	cout << buf;
}