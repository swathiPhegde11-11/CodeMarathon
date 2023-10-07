#include "Functionalities.h"

int main(){
    TouristVehicle* arr[SIZE]{nullptr};
    TouristVehicle* result[SIZE]{nullptr};

    createObject(arr);
    std::cout<<"\nAverage of PerHourBookingPrice of CAB: "<<averageOfCAB(arr);

    std::cout<<"\nVehicles with minimum seat Count of 4 : "<<std::endl;
    vehicelWithSeatCoun(arr,result);
    for(int i=0;i<SIZE;i++){
        if(result[i]==nullptr){
            break;
        }
        std::cout<<*result[i]<<std::endl;
    }

    std::cout<<"\nAverage PerHourPrice of CAB : "<<averageOfCAB(arr)<<std::endl;

    std::cout<<"\n";
    maximumPerHourCharge(arr);

    std::cout<<"Destroying heap Memory allocation\n";
    freeMemory(arr);


}