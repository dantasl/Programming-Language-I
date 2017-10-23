#include "task_two/transaction.h"

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