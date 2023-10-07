#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "CardType.h"
#include <iostream>
class CreditCard
{
private:
    std::string _number;
    CardType _card_type;
    float _limit;
    int _card_cvv_number;
public:
    CreditCard(
        std::string number,
        CardType card_type,
        float limit,
        int card_cvv_number
    );
    ~CreditCard() {}

    std::string number() const { return _number; }

    CardType cardType() const { return _card_type; }

    float limit() const { return _limit; }

    int cardCvvNumber() const { return _card_cvv_number; }
};

#endif // CREDITCARD_H
