#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(long accountNumber, float accountBalance, const float accountMinBalance, float currentAccountMinimumQuarter, CurrentType currentAccountType)
:Account(accountNumber,accountBalance,accountMinBalance),_currentAccountMinimumQuarterBalance(currentAccountMinimumQuarter),_currentAccountType(currentAccountType)
{
}

float CurrentAccount::CalculateInterestAmount()
{
    if(CurrentType()==CurrentType::BASIC){
        return 0.06*accountBalance();
    }
    else{
        return 0.1*accountBalance();
    }
}

std::ostream &operator<<(std::ostream &os, const CurrentAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " _currentAccountMinimumQuarterBalance: " << rhs._currentAccountMinimumQuarterBalance
       << " _currentAccountType: " <<displayCurrentType(rhs._currentAccountType);
    return os;
}

std::string displayCurrentType(const CurrentType type){
    if(type==CurrentType::BASIC){
        return "BASIC";
    }
    else {
        return "PREMIUM";
    }
}
