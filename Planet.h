#ifndef SPACE_PLANET_H
#define SPACE_PLANET_H

#include "AstronomicalObject.h"
#include "Satellite.h"
#include<iostream>


class planet: public AstronomicalObject
{
    //satellite *satellitePlanet;
    std::string name;
    int nrSatellites;
    float gravity;
public:
    planet(std::string name);
    planet(std::string name, int nrSatellites, double temperature,double gravitationalAcceleration);
    planet(std::string name, int nrSatellites ,float gravity, satellite *satellitePlanet);
    int getnrSattelites();
    string getname();
    void addSattelits();
    void Calculum();
    void printPlanet(ostream &os);
    friend ostream& operator<<(ostream& os, const planet& );

};

#endif //SPACE_PLANET_H