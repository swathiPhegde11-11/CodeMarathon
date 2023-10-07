#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "Account.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "CurrentType.h"
#include "SavingType.h"

/*
Creating object
*/
void createAccount(Account* accounts[SIZE]);

float aveargeBalance(Account* accounts[SIZE]);

/*
return accountnumber Account with highestaccountBalace
*/
long accountWithHighestBalance(Account* accounts[SIZE]);

/*
Calcualating interest amount for all accounts
*/
void calculateInterest(Account* accounts[SIZE]);

/*
Returns Account with minimum Balance
*/
int minimumAccountBalance(Account* accounts[SIZE]);

/*
Free memory
*/
void freeMemory(Account* accounts[SIZE]);

bool checkNullAll(Account* accounts[SIZE]);

#endif // FUNCTIONALITIES_H
