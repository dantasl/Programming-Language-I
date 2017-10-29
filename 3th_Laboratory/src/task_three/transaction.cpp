/**
 * @file	transaction.cpp
 * @brief	Implementing functions described in transaction.h 		    
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	20/10/2017
 * @date	21/10/2017
 */

#include "task_three/transaction.h"

Transaction::Transaction() {}
Transaction::Transaction(string _description, double _money, Style _style)
	: description(_description)
	, money(_money)
	, style(_style)
	{ /* empty */ }
Transaction::~Transaction() {}

string Transaction::getDescription() { return description; }
double Transaction::getMoney() { return money; }
Style Transaction::getStyle() { return style; }

void Transaction::setDescription(string const _description) { description = _description; }
void Transaction::setMoney(double const _money) { money = _money; }
void Transaction::setStyle(Style const _style) { style = _style; } 