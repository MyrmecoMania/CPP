/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:55:31 by enorie            #+#    #+#             */
/*   Updated: 2024/04/25 14:09:20 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	_nbAccounts++;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"
	<< std::endl;
};
Account::~Account ( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
	<< std::endl;
};

void	Account::_displayTimestamp( void ) {
	std::time_t result = std::time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
	<< std::setw(2) << 1 + std::localtime(&result)->tm_mon
	<<  std::setw(2) << std::localtime(&result)->tm_mday
	<<  "_"
	<<  std::setw(2) << std::localtime(&result)->tm_hour
	<<  std::setw(2) << std::localtime(&result)->tm_min
	<<  std::setw(2) << std::localtime(&result)->tm_sec
	<< "] ";
};

void	Account::displayStatus ( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
	<< std::endl;
};

void	Account::makeDeposit ( int deposit ) {
	_displayTimestamp();
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
	<< std::endl;
};

bool	Account::makeWithdrawal ( int withdrawal ) {
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals
	<< std::endl;
	return (true);
};

void	Account::displayAccountsInfos ( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
};

int	Account::getNbAccounts ( void ) {
	return (_nbAccounts);
};

int	Account::getTotalAmount ( void ) {
	return (_totalAmount);
};

int	Account::getNbWithdrawals ( void ) {
	return (_totalNbWithdrawals);
};

int	Account::getNbDeposits ( void ) {
	return (_totalNbDeposits);
};
