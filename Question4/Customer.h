#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerType.h"
#include "CreditCard.h"
#include<iostream>
class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _customer_type;
    CreditCard* _credit_card;
public:
    Customer(
        std::string name,
        std::string id,
        CustomerType customer_type,
        CreditCard* credit_card
        );
    ~Customer() {
        std::cout<<"\nCustomer with ID : "<<id()<<" is deleted\n";
    }

    std::string name() const { return _name; }

    std::string id() const { return _id; }

    CustomerType customerType() const { return _customer_type; }

    CreditCard* creditCard() const { return _credit_card; }
};

#endif // CUSTOMER_H
