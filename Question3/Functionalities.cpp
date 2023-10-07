#include "Functionalities.h"

void createObject(Bill *bill[SIZE])
{
    bill[0]=new Bill(123.5f,12.0f,new Invoice("I101",InvoiceType::E_BILL,1));
    bill[1]=new Bill(123.5f,34.0f,new Invoice("I102",InvoiceType::PAPER_SLIP,2));
    bill[2]=new Bill(123.5f,25.0f,new Invoice("I103",InvoiceType::SMS_GENERATED,4));
}

std::string invoiceNumberOfMaxBill(Bill *bill[SIZE])
{
    return std::string();
}

bool checkNullAll(Bill *bill[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(bill[i]!=nullptr){
            return false;
        }
    }
    return true;
}

void freeMemory(Bill *bill[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete bill[i]->billAssociatedInvce();
        delete bill[i];
    }
}
