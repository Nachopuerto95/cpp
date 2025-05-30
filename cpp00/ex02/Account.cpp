#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    _nbAccounts++;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "closed" << std::endl;
}

// STATICS FUNCTIONS

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

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
                << "total:" << getTotalAmount() << ";"
                << "deposits:" << getNbDeposits() << ";"
                << "withdrawals:" << getNbWithdrawals() << std::endl;
}

// PRIVATE

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm *ltm = std::localtime(&now);

    std::cout << "["
              << (1900 + ltm->tm_year)
              << std::setfill('0') << std::setw(2) << (1 + ltm->tm_mon)
              << std::setfill('0') << std::setw(2) << ltm->tm_mday
              << "_"
              << std::setfill('0') << std::setw(2) << ltm->tm_hour
              << std::setfill('0') << std::setw(2) << ltm->tm_min
              << std::setfill('0') << std::setw(2) << ltm->tm_sec
              << "] ";
}

// METHODS

void Account::makeDeposit(int deposit) {
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount - deposit << ";"
                << "deposit:" << deposit << ";"
                << "amount:" << _amount << ";"
                << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    
    if (withdrawal > checkAmount())
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "withdrawal:refused" << std::endl;
        return false;
    }
    else {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << _amount + withdrawal << ";"
            << "withdrawal:" << withdrawal << ";"
            << "amount:" << _amount << ";"
            << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
}

int Account::checkAmount(void) const {
    return this->_amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "deposits:" << _nbDeposits << ";"
                << "withdrawals:" << _nbWithdrawals << std::endl;
}

