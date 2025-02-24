/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:51:09 by ygille            #+#    #+#             */
/*   Updated: 2025/02/24 15:08:02 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static void	_displayTimestamp(void);

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	_displayTimestamp();
}

Account::~Account()
{
}

void	Account::makeDeposit(int deposit)
{
	(void) deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void) withdrawal;
	return (true);
}

int	Account::checkAmount() const
{
	return (0);
}

void	Account::displayStatus() const
{
}

static void	_displayTimestamp()
{
	std::cout << std::put_time(local_time, "%Y-%m-%d_%H:%M:%S");
}
