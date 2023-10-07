#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumbr, InvoiceType invoiceType, int invoiceItems)
:_invoiceNumbr(invoiceNumbr),_invoiceType(invoiceType),_invoiceItems(invoiceItems)
{
}