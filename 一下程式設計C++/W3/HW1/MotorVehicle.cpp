#include<iostream>
#include<string>
#include"MotorVehicle.h"
using namespace std;

int main(){
    MotorVehicle Motor{};

    int year = 2021;
    int capacity = 200;

    Motor.set_name("car");
    Motor.set_fuel("95_GAS");
    Motor.set_year(year);
    Motor.set_color("Blue");
    Motor.set_capaity(capacity);

    Motor.display();
}
