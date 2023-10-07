#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "Customer.h"
#include "CustomerType.h"
#include "CreditCard.h"
#include "CardType.h"
#define SIZE 3

/*
Function to create 3 instance of customer & CreditCard(Aggregation)
*/
void createObject(Customer* customer[SIZE],CreditCard* creditCard[SIZE]);

/*
function to return number(creditcard) whose limit(creditcard) is minimum among all Customer
*/
std::string numberWithMinimumLimit(Customer* customer[SIZE]);

/*
Return container of CreditCard whoe _cardType matches type(second arg)
*/
void cardWithMatchingType(CreditCard* creditCard[SIZE],CardType type,CreditCard* result[SIZE]);

/*
Return Customertype whose id matches
*/
CustomerType customerWithMatchinID(Customer* Customer[SIZE],std::string cid);

/*
Return bool check whether all Customer have cardType Sinature
*/
bool customerCardType(Customer* customer[SIZE]);

/*
Delete heap memory
*/
void freeMemory(Customer* customer[SIZE]);

bool chekAllNull(Customer* customer[SIZE]);

#endif // FUNCTIONALITIES_H
