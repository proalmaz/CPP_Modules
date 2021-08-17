#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

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
	_nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	// время
	cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";" << "created" << endl;
}

//void Account::_displayTimestamp()
//{
//
//}

void Account::displayAccountsInfos(void)
{
	cout << "accounts:" << _nbAccounts << ";total:" <<
	_totalAmount << "deposits:" << _totalNbDeposits <<
	";withdrawals:" << _totalNbWithdrawals << endl;
}

Account::~Account()
{
	cout << "index:" << _accountIndex << ";amount:" <<
	_amount << ";" << "closed" << endl;
}