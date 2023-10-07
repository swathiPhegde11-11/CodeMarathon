#include<iostream>
#include "Functionalities.h"
int main(){
    Bill* bill[SIZE]{nullptr};
    Invoice* result[SIZE]{nullptr};
    try{
        createObject(bill);

        std::cout<<"\n";
        std::cout<<"\nInvoice Number of Maximum billAmount : "<<invoiceNumberOfMaxBill(bill);
        std::cout<<"\n";

        std::cout<<"\nBill amount of InvoiceNumer : "<<billAmountOfInvoiceNumber(bill,"I101");
        std::cout<<"\n";

        std::cout<<"\nInvoices whose billamount is greater than 120 : ";
        std::cout<<"\n";
        arrayOfBillAssociateInvoice(bill,120,result);
        for(int i=0;i<SIZE;i++){
            if(result[i]==nullptr){
                break;
            }
            std::cout<<*result[i];
            std::cout<<"\n";
        }
        maxAndMinBillAmount(bill);

        freeMemory(bill);


    }catch(std::runtime_error& error){
        std::cout<<error.what();
    }

}