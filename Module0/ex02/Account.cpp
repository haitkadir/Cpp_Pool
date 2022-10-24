#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// ------------------- Constructor -----------------
Account::Account( int initial_deposit ){
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
    this->_nbAccounts++;
    this->_totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";created" << std::endl;
}

// -------------------- Geters ----------------
int	Account::getNbAccounts( void ){
    return _nbAccounts;
}

int	Account::getTotalAmount( void ){
    return _totalAmount;
 }

int Account::getNbDeposits( void ){
    return _totalNbDeposits;
 }

int	Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
  }

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
    << ";total:" << getTotalAmount()
    << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals()
    << std::endl;
}

void	Account::_displayTimestamp( void ){
    std::time_t t;
    
    t = std::time(NULL);
    char ftstr[255];
    if (std::strftime(ftstr, sizeof(ftstr), "[%G%m%e_%I%M%S] ", std::localtime(&t))) {
        std::cout << ftstr;
    }

}


void	Account::makeDeposit( int deposit ){
    int p_amount;

    p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << p_amount
    << ";deposit:" << deposit
    << ";amount:" << this->_amount
    << ";nb_deposits:" << this->_nbDeposits
    << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal ){
    int p_amount;

    p_amount = this->_amount;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << p_amount
    << ";withdrawal:";
    if (p_amount >= withdrawal){
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        // Static variables
        this->_totalAmount -= withdrawal;
        this->_totalNbWithdrawals++;
        std::cout << withdrawal
        << ";amount:" << this->_amount
        << ";nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
        return true;
    }else {
        std::cout << "refused" << std::endl;
        return false;
    }
}


void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals
    << std::endl;
}


// ------------------- Destructor --------------
Account::~Account(void){
    this->_totalAmount -= this->_amount;
    this->_totalNbDeposits -= this->_nbDeposits;
    this->_totalNbWithdrawals -= this->_nbWithdrawals;
    this->_nbAccounts--;
    _displayTimestamp();
    std::cout << "index:"
    << this->_accountIndex
    << ";amount:" << this->_amount
    << ";closed" << std::endl;
}
