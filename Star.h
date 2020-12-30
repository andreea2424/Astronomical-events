#ifndef SPACE_STAR_H
#define SPACE_STAR_H
#include "AstronomicalObject.h"
#include "Star.h"
#include<iostream>

class star : public AstronomicalObject{
protected:
    std::string name;
    float rotationSpeed;
    double luminosity;
public:
    star(std::string name, double temperature,double gravitationalAcceleration,float rotationspeed, double luminosity, float rotationSpeed);
    star(std::string name);
    void Calculum();
    void InfStar (std::ostream& os);
    void add();
    string getname();
    friend std::ostream &operator<<(std::ostream &os, const star &);

};
#endif //SPACE_STAR_H