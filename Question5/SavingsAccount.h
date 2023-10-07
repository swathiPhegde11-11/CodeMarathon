#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include<iostream>
#include "SavingType.h"
#include "Account.h"
class SavingsAccount:public Account
{
private:
    SavingType _savingsAccountType;
public:
    SavingsAccount(const SavingsAccount &)=default;
    SavingsAccount(
        long accountNumber,
        float accountBalance,
        const float accountMinBalance,
        SavingType savingsAccountType
    );
    ~SavingsAccount() {
        std::cout<<"\nSavings Account with number : "<<accountNumber()<<" is deleted\n";
    }

    void operator=(const SavingsAccount *sv){
        SavingsAccount(*sv);
    }
    
    float CalculateInterestAmount() override;

    SavingType savingsAccountType() const { return _savingsAccountType; }

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &rhs);
};
std::string displaySavingsType(const SavingType type);

#endif // SAVINGSACCOUNT_H
