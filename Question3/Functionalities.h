#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "Invoice.h"
#include "Bill.h"
#include "InvoiceType.h"
#define SIZE 3
/*
Function to create 3 object of Bill and Invoice
*/
void createObject(Bill* bill[SIZE]);

/*
Return InvioceNumber of BILL whose billAmount is maximum
*/
std::string invoiceNumberOfMaxBill(Bill* bill[SIZE]);

/*
Return billAmount of INVOICE whose invoiceNumber is second argument
*/
float billAmountOfInvoiceNumber(Bill* bill[SIZE],std::string invoiceNum);

/*
Return array of billAssociatedInvoice whose billAmount is > second argument(float)
*/
void arrayOfBillAssociateInvoice(Bill* bill[SIZE],float threshold,Invoice* result[SIZE]);

/*
function to print Bill whose billAmount is max and min
*/
void maxAndMinBillAmount(Bill* bill[SIZE]);

/*
Check null
*/
bool checkNullAll(Bill* bill[SIZE]);

/*
free memory
*/
void freeMemory(Bill* bill[SIZE]);

#endif // FUNCTIONALITIES_H
