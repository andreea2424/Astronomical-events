#ifndef SPACE_SATELLITE_H
#define SPACE_SATELLITE_H

#include "AstronomicalObject.h"

#include<iostream>
#include <string>

class satellite : public AstronomicalObject {
private:
    std::string name;
    float gravity;

public:
    satellite(std::string name, double temperature1, float gravity, double gravitationalAcceleration);
public :
    void Calculum();
public:
    void printsatelitte(std::ostream& os);
    friend std::ostream &operator<<(std::ostream &os, const satellite &);
};

#endif //SPACE_SATELLITE_H
