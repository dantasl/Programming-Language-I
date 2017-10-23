#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include "agency.h"
#include "checking_account.h"
#include "transaction.h"

void create_agency(vector<Agency*> &agency);
void choose_agency(vector<Agency*> &agency);
void menu_agency(Agency* &agency);
void operate_agency(Agency* &agency, int option);
string readNumber();
double getMoney();



#endif