#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(long accountNumber, float accountBalance, const float accountMinBalance, SavingType savingsAccountType)
:Account(accountNumber,accountBalance,accountMinBalance),_savingsAccountType(savingsAccountType)
{
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " _savingsAccountType: " <<displaySavingsType(rhs._savingsAccountType);
    return os;
}

std::string displaySavingsType(const SavingType type)
{
    if(type==SavingType::METRO){
        return "METRO";
    }
    else if(type==SavingType::SPECIAL){
        return "SPECIAL";
    }
    else{
        return "URBAN";
    }
}

float SavingsAccount::CalculateInterestAmount()
{
    if(savingsAccountType()==SavingType::URBAN||savingsAccountType()==SavingType::METRO)
    {
        return 0.05*accountBalance();
    }
    else{
        return 0.07*accountBalance();
    }
}
