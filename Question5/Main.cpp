#include<iostream>
#include "Functionalities.h"

int main(){
    Account* accounts[SIZE]{nullptr};
    try{
        createAccount(accounts);

        std::cout<<"Average account balance is : "<<aveargeBalance(accounts)<<"\n";

        std::cout<<"Account number with Highest balance : "<<accountWithHighestBalance(accounts)<<"\n";

        calculateInterest(accounts);

        int ind=minimumAccountBalance(accounts);
        std::cout<<"Account with minimum account balance : Account Number : \n"<<*accounts[ind]<<"\n";
        //minimumAccountBalance(accounts);
        

        freeMemory(accounts);

    }catch(std::runtime_error& error){
        std::cout<<error.what();
    }
}