#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _totalAmount = getTotalAmount() + initial_deposit;
    _nbAccounts = getNbAccounts() + 1;
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts - 1;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    // [19920104_091532] index:0;amount:42;created
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";"
                << "created" << std::endl;
}

Account::~Account( void )
{
  //[19920104_091532] index:7;amount:8942;closed
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";"
            << "amount:" << checkAmount() << ";"
            << "closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t now = time(0);

    tm *ltm = localtime(&now);

std::cout << "["
            << ltm->tm_year 
            << std::setw(2) << std::setfill('0') << ltm->tm_mon 
            << std::setw(2) << std::setfill('0') << ltm->tm_mday
            << "_"
            << std::setw(2) << std::setfill('0') << ltm->tm_hour 
            << std::setw(2) << std::setfill('0') << ltm->tm_min
            << std::setw(2) << std::setfill('0') << ltm->tm_sec
            << "]";
}

int  Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int  Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int  Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int  Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void )
{
    // [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";"
                << "total:" << getTotalAmount() << ";"
                << "deposits:" << getNbDeposits() << ";"
                << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    // 19920104_091532] index:0;amount:42;deposits:0;withdrawals:0 
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";"
                << "deposits" << this->_nbDeposits << ";"
                << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount = getTotalAmount() + deposit;
    _totalNbDeposits++;

    // [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";"
                << "p_amount:" << this->_amount - deposit << ";"
                << "deposit:" << deposit << ";"
                << "amount:" << this->_amount << ";"
                << "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
     _displayTimestamp();
    if (this->_amount - withdrawal < 0)
    {
        std::cout << " index:" << this->_accountIndex << ";"
                << "p_amount:" << this->_amount << ";"
                << "withdrawal:" << withdrawal << "refused" << std::endl;

        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalAmount = getTotalAmount() - withdrawal;
    _totalNbWithdrawals++;

    // [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1 
    std::cout << " index:" << this->_accountIndex << ";"
                << "p_amount:" << this->_amount + withdrawal << ";"
                << "withdrawal:" << withdrawal << ";"
                << "amount:" << this->_amount << ";"
                << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return(true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}