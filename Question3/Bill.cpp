#include "Bill.h"

Bill::Bill(float billAmount, float billTaxAmount, Invoice *billAssociatedInvce)
:_billAmount(billAmount),_billAssociatedInvce(billAssociatedInvce)
{
    if(billTaxAmount<billAmount){
        _billTaxAmount=billTaxAmount;
    }
    else{
        throw std::runtime_error("BillTaxAmount must be less than billAmont\n");
    }
}