#include "AstronomicalObject.h"
#include "Star.h"
#include "Planet.h"
#include "Satellite.h"
#include<vector>
#include <iostream>
AstronomicalObject::AstronomicalObject(std::string name, float mass, double circumference, double temperature,
                                       double gravitationalAcceleration) {
    this-> name = name;
    this-> mass= mass;
    this-> circumference = circumference;
    this->temperature = temperature;
    this->gravitationalAcceleration=gravitationalAcceleration;
}
string AstronomicalObject::getname(){
    return name;
}
void AstronomicalObject::observeFen(astronomicalPhenomenon &ap ) {
    ap.DifFen();
}
void AstronomicalObject::func(AstronomicalObject *a ){
    a->Calculum();
}
void AstronomicalObject::Calculum () {

    std::cout << "The force of weight for a person on a celestial body it cannot be calculated in general case:"
              << std::endl;
}
  /*  void AstronomicalObject::InfcelestialBody(ostream &os) {
        os << std::endl;
        os << "Name: " << name << std::endl;
        os << "Mass: " << mass << "km/s" << std::endl;
        os << "Circumference: " << circumference << "L☉" << std::endl;
        os << "Temperature: " << temperature << "K" << std::endl;
        os << std::endl;
    }*/
 void AstronomicalObject::add (AstronomicalObject &a){
    vect.push_back(a);
}

void AstronomicalObject::display(vector<AstronomicalObject *> vect) {
    for(int i = 0; i < (int)  vect.size() ; i++)
    {
        cout << vect[i]->getname() <<std:: endl;
    }
}