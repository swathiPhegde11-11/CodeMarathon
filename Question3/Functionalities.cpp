#include "Functionalities.h"

void createObject(Bill *bill[SIZE])
{
    bill[0]=new Bill(123.5f,12.0f,new Invoice("I101",InvoiceType::E_BILL,1));
    bill[1]=new Bill(103.5f,34.0f,new Invoice("I102",InvoiceType::PAPER_SLIP,2));
    bill[2]=new Bill(113.5f,25.0f,new Invoice("I103",InvoiceType::SMS_GENERATED,4));
}

std::string invoiceNumberOfMaxBill(Bill *bill[SIZE])
{
    if(checkNullAll(bill)){
        throw std::runtime_error("Array is empty");
    }
    float max=bill[0]->billAmount();
    Bill *res{bill[0]};
    float currentMax=0.0f;
    for(int i=0;i<SIZE;i++){
        if(bill[i]==nullptr){
            continue;
        }
        currentMax=bill[i]->billAmount();
        if(max<currentMax){
            max=currentMax;
            res=bill[i];
        }
    }

    return res->billAssociatedInvce()->invoiceNumbr();
}

float billAmountOfInvoiceNumber(Bill *bill[SIZE], std::string invoiceNum)
{
    float billAmount=0.0f;
    if(checkNullAll(bill)){
        throw std::runtime_error("Array is empty");
    }
    for(int i=0;i<SIZE;i++){
        if(bill[i]==nullptr){
            continue;
        }
        if(invoiceNum==bill[i]->billAssociatedInvce()->invoiceNumbr()){
            billAmount=bill[i]->billAmount();
        }
    }
    return billAmount;
    
}

void arrayOfBillAssociateInvoice(Bill *bill[SIZE], float threshold, Invoice *result[SIZE])
{
    if(checkNullAll(bill)){
        throw std::runtime_error("Array is empty");
    }
    int j=0;
    for(int i=0;i<SIZE;i++){
        if(bill[i]->billAmount()>threshold){
            result[j++]=bill[i]->billAssociatedInvce();
        }
    }
}

void maxAndMinBillAmount(Bill *bill[SIZE])
{
    
    if(checkNullAll(bill)){
        throw std::runtime_error("Array is empty");
    }
    float max=bill[0]->billAmount();
    float currentMax=0.0f;
    std::string maxInvioce;
    for(int i=0;i<SIZE;i++){
        currentMax=bill[i]->billAmount();
        //currentMin-bill[i]->billAmount();
        // if(min>currentMin){
        //     min=currentMin;
        //     minInvoice=bill[i]->billAssociatedInvce()->invoiceNumbr();
        // }
        if(max<=currentMax){
            max=currentMax;
            maxInvioce=bill[i]->billAssociatedInvce()->invoiceNumbr();
        }
    }
    float min=bill[0]->billAmount();
    float currentMin=0.0f;
    std::string minInvoice;
    for(int i=0;i<SIZE;i++){
        //currentMax=bill[i]->billAmount();
        currentMin=bill[i]->billAmount();
        if(min>currentMin){
            min=currentMin;
            minInvoice=bill[i]->billAssociatedInvce()->invoiceNumbr();
        }
        // if(max<currentMax){
        //     max=currentMax;
        //     maxInvioce=bill[i]->billAssociatedInvce()->invoiceNumbr();
        // }
    }
    std::cout<<"\nInvoice numberof Maximum billAmount : "<<maxInvioce<<"\nInvoice number of Minimum billAmount : "<<minInvoice<<"\n";
}

bool checkNullAll(Bill *bill[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(bill[i]!=nullptr){
            return false;
        }
    }
    return true;
}

void freeMemory(Bill *bill[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete bill[i];
    }
}
