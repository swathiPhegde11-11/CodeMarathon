#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
#include "InvoiceType.h"
class Invoice
{
private:
    std::string _invoiceNumbr;
    InvoiceType _invoiceType;
    int _invoiceItems;
public:
    Invoice(
        std::string invoiceNumbr,
        InvoiceType invoiceType,
        int invoiceItems
    );
    ~Invoice() {
        std::cout<<"\nInvoice ID : "<<invoiceNumbr()<<" is destroyed\n";
    }
  
    std::string invoiceNumbr() const { return _invoiceNumbr; }

    InvoiceType invoiceType() const { return _invoiceType; }

    int invoiceItems() const { return _invoiceItems; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);
};
std::string displayEnum(const InvoiceType type);

#endif // INVOICE_H
