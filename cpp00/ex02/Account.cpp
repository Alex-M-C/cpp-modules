#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// -----------------------------------------------------------------------------
// Initialize static variables
// -----------------------------------------------------------------------------
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// -----------------------------------------------------------------------------
// Getters for static variables
// -----------------------------------------------------------------------------
int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

// -----------------------------------------------------------------------------
// Constructor & Destructor
// -----------------------------------------------------------------------------
Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed" << std::endl;
}

// -----------------------------------------------------------------------------
// Timestamp generation
// -----------------------------------------------------------------------------
void Account::_displayTimestamp(void) {
	std::time_t rawtime;
	std::tm* timeinfo;
	char buffer[20];

	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);

	// Formats time as [YYYYMMDD_HHMMSS]
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer << " ";
}

// -----------------------------------------------------------------------------
// Global Display
// -----------------------------------------------------------------------------
void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			  << "total:" << getTotalAmount() << ";"
			  << "deposits:" << getNbDeposits() << ";"
			  << "withdrawals:" << getNbWithdrawals() << std::endl;
}

// -----------------------------------------------------------------------------
// Actions
// -----------------------------------------------------------------------------
void Account::makeDeposit(int deposit) {
	int p_amount = _amount;
	
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << _amount << ";"
			  << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";";

	if (withdrawal > _amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << "withdrawal:" << withdrawal << ";"
			  << "amount:" << _amount << ";"
			  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

// -----------------------------------------------------------------------------
// Checks & Status Display
// -----------------------------------------------------------------------------
int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals << std::endl;
}