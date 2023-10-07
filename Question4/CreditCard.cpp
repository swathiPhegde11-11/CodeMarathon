#include "CreditCard.h"

CreditCard::CreditCard(std::string number, CardType card_type, float limit, int card_cvv_number)
:_number(number),_card_type(card_type),_limit(limit),_card_cvv_number(card_cvv_number)
{
}