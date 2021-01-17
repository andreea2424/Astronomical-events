#include "Star.h"
#include<string>
#include<iostream>

star ::star(std::string name, double temperature,double gravitationalAcceleration,float rotationspeed, double luminosity, float rotationSpeed) : AstronomicalObject(name,mass, circumference, temperature, gravitationalAcceleration) {
    this-> name = name;
    this-> rotationSpeed= rotationspeed;
    this-> luminosity = luminosity;
    this->temperature = temperature;
    this->gravitationalAcceleration = gravitationalAcceleration;
}
star::star(std::string name): AstronomicalObject(name,mass, circumference, temperature, gravitationalAcceleration) {
    this-> name = name;
}

void star :: Calculum(){
    try {
        std::cout << "All celestial bodies pulls on all objects with a force of gravity downward toward the center."<<std::endl;
        std::cout << "Find out with what force you will be attracted to this star by entering your weight in kg:  "<<endl;
        massPers=0;
        std::cin >> massPers;
        weightForce = massPers*gravitationalAcceleration;
        if (weightForce > 0 ){
            std::cout <<"The force of gravity on the required star is: "<< weightForce << std::endl;
        } else {
            throw (weightForce);
        }
    }
    catch (float weightForce) {
        cout <<"The weight force cannot be 0 ";

    }

}
void star :: InfStar (std::ostream& os) {
    os << std::endl;
    os << "Name: " << name << endl;
    os <<"Rostion speed: "<< rotationSpeed<<"km/s"<< std::endl;
    os << "Luminosity: " << luminosity <<"L☉" <<std::endl;
    os << "Temperature: "<<temperature<<"K"<< std::endl;
    os << std::endl;
}
std:: string star::getname(){
    return name;
}
std::ostream& operator<<(std::ostream& os, star& star1)
{
    star1.InfStar(os);
    return os;
}

