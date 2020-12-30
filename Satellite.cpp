#include "Satellite.h"
#include "AstronomicalObject.h"
#include <string>
#include<iostream>

satellite::satellite(std::string name, double temperature1, float gravity, double gravitationalAcceleration)
        : AstronomicalObject(name, mass, circumference, temperature1, gravitationalAcceleration) {
    this->name = name;
    this->temperature= temperature;
    this->gravity=gravity;
    this->gravitationalAcceleration= gravitationalAcceleration;

}

void satellite::Calculum(){
    std::cout << "All celestial bodies pulls on all objects with a force of gravity downward toward the center."<<std::endl;
    std::cout << "Find out with what force you will be attracted to this satellite by entering your weight in kg:  "<<std::endl;
    massPers = 0;
    std::cin >> massPers;
    weightForce = massPers*gravitationalAcceleration;
    std::cout <<"The force of gravity on the required satellite is: "<< weightForce <<"N" <<std::endl;
}


void satellite :: printsatelitte(std::ostream& os) {
    os << std::endl;
    os << "Name: " << name << std::endl;
    os << "Temperature: " << temperature << std::endl;
    os << std::endl;
}
std::ostream& operator<<(std::ostream& os, satellite& Stl)
{
    Stl.printsatelitte(os);
    return os;
}
