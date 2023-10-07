#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string number, VehicleType type, int seat_count, float per_hour_booking_charge)
:_number(number),_type(type),_seat_count(seat_count),_per_hour_booking_charge(per_hour_booking_charge)
{
}