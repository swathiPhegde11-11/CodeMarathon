#include "Functionalities.h"

void createAccount(Account *accounts[SIZE])
{
    accounts[0]=new SavingsAccount(123456789,545.5f,500.0f,SavingType::METRO);
    accounts[1]=new CurrentAccount(123456789,525.5f,500.0f,678.9f,CurrentType::BASIC);
    accounts[2]=new SavingsAccount(123456789,425.5f,500.0f,SavingType::SPECIAL);
}

float aveargeBalance(Account *accounts[SIZE])
{
    if(checkNullAll(accounts)){
        throw std::runtime_error("Array is empty");
    }
    float average=0.0f;
    for(int i=0;i<SIZE;i++){
        average+=accounts[i]->accountBalance();
    }
    return average/SIZE;
}

long accountWithHighestBalance(Account *accounts[SIZE])
{
    if(checkNullAll(accounts)){
        throw std::runtime_error("Array is empty");
    }
    int j=0;
    float maxBalance=accounts[0]->accountBalance();
    for(int i=0;i<SIZE;i++){
        if(accounts[i]==nullptr){
            continue;
        }
        if(maxBalance<accounts[i]->accountBalance()){
            maxBalance=accounts[i]->accountBalance();
            j=i;
        }
    }
    return accounts[j]->accountNumber();
}

void calculateInterest(Account *accounts[SIZE])
{
    if(checkNullAll(accounts)){
        throw std::runtime_error("Array empty");
    }
    std::cout<<"Interests of accounts : \n";
    for(int i=0;i<SIZE;i++){
        std::cout<<accounts[i]->CalculateInterestAmount()<<"\n";
    }
    
}

int minimumAccountBalance(Account *accounts[SIZE])
{
    if(checkNullAll(accounts)){
        throw std::runtime_error("Array is empty");
    }
    int index;
    for(int i=0;i<SIZE;i++){
        if(accounts[i]==nullptr){
            continue;
        }
        float min=accounts[0]->accountBalance();
        if(min<accounts[i]->accountBalance()){
            min=accounts[i]->accountBalance();
            index=i;
        }
    }
    return index;
    //std::cout<<"Account with minimum account balance : Account Number : "<<number<<"\n";
}

void freeMemory(Account *accounts[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete accounts[i];
    }
}

bool checkNullAll(Account *accounts[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(accounts[i]!=nullptr){
            return false;
        }
    }
    return true;
}
