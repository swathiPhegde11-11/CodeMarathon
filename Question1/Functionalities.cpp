#include "Functionalities.h"

void createObject(Product *arr[SIZE])
{
    arr[0]=new Product("P101",ProductType::APPLIANCE,987.9f,"Texas");
    arr[1]=new Product("P102",ProductType::FMCG,87.9f,"Dane");
    arr[2]=new Product("P103",ProductType::PERFUME,97.9f,"Fogg");
    arr[3]=new Product("P104",ProductType::APPLIANCE,967.9f,"Metric");
    arr[4]=new Product("P105",ProductType::FMCG,965.9f,"Tane");
}

float averageProductPrice(Product *arr[SIZE])
{
    float average=0.0f;
    for(int i=0;i<SIZE;i++){
        average+=arr[i]->productPrice();

    }
    return average/SIZE;
}

float productTaxAmount(Product *arr[SIZE])
{
    float currentMin=0.0f;
    float min=arr[0]->productPrice();
    
    for(int i=0;i<SIZE;i++){
        currentMin=arr[i]->productPrice();
        if(min>currentMin){
            min=currentMin;
            //res=(*arr[i]);
        }
    }
    
    return 0.01f*min;
}

float maximumProductPrice(Product *arr[SIZE])
{
    float max=arr[0]->productPrice();
    float currentMax=0.0f;
    for(int i=0;i<SIZE;i++){
        currentMax=arr[i]->productPrice();
        if(max<currentMax){
            max=currentMax;
        }
    }
    return max;
}

void freeMemory(Product *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
