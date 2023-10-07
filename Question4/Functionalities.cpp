#include "Functionalities.h"

CustomerType customerWithMatchinID(Customer *Customer[SIZE], std::string cid)
{
    return CustomerType();
}

bool customerCardType(Customer *customer[SIZE])
{
    if(chekAllNull(customer)){
        throw std::runtime_error("Array is empty");
    }
    bool flag=true;
    for(int i=0;i<SIZE;i++){
        if(customer[i]==nullptr){
            continue;
        }
        if(customer[i]->creditCard()->cardType()!=CardType::SIGNATURE){
            flag=false;
            break;
        }
    }
    return flag;
}

void freeMemory(Customer *customer[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete customer[i]->creditCard();
        delete customer[i];
    }
}

bool chekAllNull(Customer *customer[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(customer[i]!=nullptr){
            return false;
        }
    }
    return true;
}