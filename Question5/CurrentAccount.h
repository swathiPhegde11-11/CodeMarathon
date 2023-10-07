#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include<iostream>
#include "CurrentType.h"
#include "Account.h"
class CurrentAccount:public Account
{
private:
    float _currentAccountMinimumQuarterBalance;
    CurrentType _currentAccountType;

public:
    CurrentAccount(
        long accountNumber,
        float accountBalance,
        const float accountMinBalance,
        float currentAccountMinimumQuarter,
        CurrentType currentAccountType

    );
    ~CurrentAccount() {
        std::cout<<"\nCurrent account : "<<accountNumber()<<" deleted\n";
    }
    
    float CalculateInterestAmount() override;

    float currentAccountMinimumQuarterBalance() const { return _currentAccountMinimumQuarterBalance; }

    CurrentType currentAccountType() const { return _currentAccountType; }

    friend std::ostream &operator<<(std::ostream &os, const CurrentAccount &rhs);
};
std::string displayCurrentType(const CurrentType type);
#endif // CURRENTACCOUNT_H
