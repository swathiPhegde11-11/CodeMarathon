#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H
#include<iostream>
#include "VehicleType.h"

class TouristVehicle
{
private:
    std::string _number;
    VehicleType _type;
    int _seat_count;
    float _per_hour_booking_charge;
public:
    TouristVehicle(
        std::string number,
        VehicleType type,
        int seat_count,
        float per_hour_booking_charge
    );
    ~TouristVehicle() {}

    std::string number() const { return _number; }

    VehicleType type() const { return _type; }

    int seatCount() const { return _seat_count; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }
};

#endif // TOURISTVEHICLE_H
