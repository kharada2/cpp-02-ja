#include "vehicle.hpp"

Vehicle::Vehicle(){}

float Vehicle::get_speed(){
    return speed;
}

float Vehicle::get_fuel(){
    return fuel;
}


void Vehicle::set_speed(float speed){
    this->speed = speed;
    
}
void Vehicle::set_fuel(float fuel){
    this->fuel = fuel;
}
