#include<iostream>
#include "Functionalities.h"

int main(){
    Product* arr[SIZE];
    createObject(arr);
    std::cout<<"Average ProductPrice : "<<averageProductPrice(arr)<<std::endl;
    std::cout<<"Product Tax Amount of Product with mimimum Price : "<<productTaxAmount(arr)<<"\n";
    std::cout<<"Maximum product price : "<<maximumProductPrice(arr)<<"\n";
    std::cout<<"Deleting heap memory ; ";
    freeMemory(arr);
}