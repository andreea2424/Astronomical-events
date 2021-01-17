#include "AstronomicalObject.h"
#include "Planet.h"

#include <string>
#include<iostream>

planet::planet (std:: string name):AstronomicalObject(name, mass, circumference, temperature, gravitationalAcceleration){
    this->name=name;
}
planet::planet(std::string name, int nrSatellites ,double temperature, double gravitationalAcceleration)
        : AstronomicalObject(name, mass, circumference, temperature, gravitationalAcceleration) {
    this->name = name;
    this->nrSatellites = nrSatellites;
    this->temperature = temperature;
    this->gravitationalAcceleration=gravitationalAcceleration;

}
string planet::getname() {
    return name;
}
void planet:: addSattelits() {
    nrSatellites++;
}
void planet::Calculum(){
try {
    std::cout << "All celestial bodies pulls on all objects with a force of gravity downward toward the center."<<std::endl;
    std::cout << "Find out with what force you will be attracted to this planet by entering your weight in kg:  "<<std::endl;

    massPers=0;
    std::cin >> massPers;
    weightForce = massPers*gravitationalAcceleration;
    if (weightForce > 0 ){
        std::cout <<"The force of gravity on the required planet is: "<< weightForce << " N"<<std::endl;
    } else {
        throw (weightForce);
    }
}
catch (float weightForce) {
    cout <<"The weight force cannot be 0 ";

}
}

void planet ::printPlanet(std::ostream &os) {

    os << std::endl;
    os << "Name: " << name << "\n";
    os << "Number of sattelits: " << nrSatellites << "\n";
    os << "Gravity of the planet in: " << gravity << " m/s2 " << "\n";
    os << endl;

}
std::ostream& operator<<(std::ostream& os,planet& P )
{
    os<<endl <<P.getname()<<endl;
    return os;
}




