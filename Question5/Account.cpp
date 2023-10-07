#include "Account.h"

Account::Account(long accountNumber, float accountBalance, const float accountMinBalance)
:_accountNumber(accountNumber),_accountBalance(accountBalance),_accountMinBalance(accountMinBalance)
{
}
std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "_accountNumber: " <<rhs._accountNumber
       << " _accountBalance: " << rhs._accountBalance
       << " _accountMinBalance: " << rhs._accountMinBalance;
    return os;
}
