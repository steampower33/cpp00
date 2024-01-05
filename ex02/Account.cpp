#include "Account.hpp"
#include <iostream>
#include <time.h>
#include <iomanip>

// Static member variable initialization
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// Display now time
void Account::_displayTimestamp(void) {
	time_t curTime = time(0);
    std::tm* ltm = std::localtime(&curTime);

	std::cout << std::setfill('0') << "[" << ltm->tm_year + 1900
	<< std::setw(2) << ltm->tm_mon + 1 << std::setw(2) << ltm->tm_mday << "_"
	<< std::setw(2) << ltm->tm_hour << std::setw(2) << ltm->tm_min << std::setw(2) << ltm->tm_sec
	<< "] ";
}

// Destructor
Account::~Account(void) {
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
}

// Display All accounts info
void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Display each account info
void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

// Make Doposit
void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount
	<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

// Make Withdrawal
bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount;
	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

// Get the number of accounts
int Account::getNbAccounts(void) {
    return _nbAccounts;
}

// Get the total amount of all accounts
int Account::getTotalAmount(void) {
    return _totalAmount;
}

// Get the total number of deposits
int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

// Get the total number of withdrawals
int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

// Check Amount
int Account::checkAmount( void ) const {
	return _amount;
}
