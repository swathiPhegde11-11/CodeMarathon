#ifndef BILL_H
#define BILL_H
#include<iostream>
#include "Invoice.h"
#include "InvoiceType.h"

class Bill
{
private:
    float _billAmount;
    float _billTaxAmount;
    Invoice* _billAssociatedInvce;
public:
    Bill(
        float billAmount,
        float billTaxAmount,
        Invoice* billAssociatedInvce
    );
    ~Bill() {
        std::cout<<"\nBill amount "<<billAmount()<<" is deleted\n";
    }

    float billAmount() const { return _billAmount; }

    float billTaxAmount() const { return _billTaxAmount; }

    Invoice* billAssociatedInvce() const { return _billAssociatedInvce; }
};

#endif // BILL_H
