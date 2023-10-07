#include "Customer.h"

Customer::Customer(std::string name, std::string id, CustomerType customer_type, CreditCard *credit_card)
:_name(name),_id(id),_customer_type(customer_type),_credit_card(credit_card)
{
}