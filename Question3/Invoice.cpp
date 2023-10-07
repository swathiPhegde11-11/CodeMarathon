#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumbr, InvoiceType invoiceType, int invoiceItems)
:_invoiceNumbr(invoiceNumbr),_invoiceType(invoiceType),_invoiceItems(invoiceItems)
{
}
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoiceNumbr: " << rhs._invoiceNumbr
       << " _invoiceType: " <<displayEnum(rhs._invoiceType)
       << " _invoiceItems: " << rhs._invoiceItems;
    return os;
}
 std::string displayEnum(const InvoiceType type){
    if(type==InvoiceType::E_BILL){
        return "EBILL";
    }
    else if(type==InvoiceType::PAPER_SLIP){
        return "PAPERSLIP";
    }
    else{
        return "SMS-GENERATED";
    }
 }