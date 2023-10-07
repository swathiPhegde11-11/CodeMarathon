#include "Functionalities.h"

int main(){
    TouristVehicle* arr[SIZE]{nullptr};
    TouristVehicle* result[SIZE]{nullptr};

    createObject(arr);
    std::cout<<"Average of PerHourBookingPrice of CAB: "<<averageOfCAB(arr);
}