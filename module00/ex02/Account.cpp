#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/**
 * [20211109_164705] index:0;amount:42;created
 */
Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += this->_amount;
	Account::_nbAccounts += 1;
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created" << std::endl;
}

/**
 * [19920104_091532] index:7;amount:8942;closed
 */
Account::~Account(void)
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
}

Account::Account(void) {
}

int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}


void	Account::_displayTimestamp(void)
{
    time_t t = time(nullptr);
    const tm* localTime = localtime(&t);

	std::cout << "[20" << localTime->tm_year - 100
    << std::setw(2) << std::setfill('0') << localTime->tm_mon + 1
    << std::setw(2) << std::setfill('0') << localTime->tm_mday
	<< '_'
    << std::setw(2) << std::setfill('0') << localTime->tm_hour
    << std::setw(2) << std::setfill('0') << localTime->tm_min
    << std::setw(2) << std::setfill('0') << localTime->tm_sec
	<< "] " ;
}

/**
 * [20211109_164705] accounts:8;total:20049;deposits:0;withdrawals:0
 */
void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();

	std::cout << "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

/**
 * [20211109_165445] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
 */
void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit
		<< ";amount:" << (this->_amount + deposit)
		<< ";nb_deposits:" << (this->_nbDeposits + 1) << std::endl;

	this->_amount += deposit;
	this->_nbDeposits += 1;

	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}


void	Account::displayStatus(void) const {
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

/**
 * [19920104_091532] index:0;p_amount:47;withdrawal:refused
 * [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
 */
bool	Account::makeWithdrawal(int withdrawal) {
	if ((this->_amount - withdrawal) < 0)
	{
		Account::_displayTimestamp();

		std::cout << "index:"
			<< this->_accountIndex << ";p_amount:"
			<< this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}

	Account::_displayTimestamp();
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;

	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;

	std::cout << "index:"
		<< this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:"
		<< withdrawal << ";amount:"
		<< (this->_amount - withdrawal) << ";nb_withdrawals:"
		<< (this->_nbWithdrawals + 1) << std::endl;
	return (true);
}

int		Account::checkAmount(void) const {
	return (0);
}