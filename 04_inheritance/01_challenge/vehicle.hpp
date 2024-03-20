#pragma once
class Vehicle{
public:
    Vehicle();
    float get_speed();
    float get_fuel();
    void set_speed(float speed);
    void set_fuel(float fuel);

protected:
    float speed;
    float fuel;
};