#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>

class Account
{
private:
    long _accountNumber;
    float _accountBalance;
    const float _accountMinBalance;

public:
    Account() =default;
    Account(const Account&)=default;
    Account(
        long accountNumber,
        float accountBalance,
        const float accountMinBalance
    );

    virtual ~Account() {
        std::cout<<"\nAccount with number : "<<accountNumber()<<" is deleted\n";
    }

    virtual float CalculateInterestAmount()=0;

    // void operator=(const Account* acc){
    //      Account(*acc);
    // }

    long accountNumber() const { return _accountNumber; }

    float accountBalance() const { return _accountBalance; }

    float accountMinBalance() const { return _accountMinBalance; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
};

#endif // ACCOUNT_H
