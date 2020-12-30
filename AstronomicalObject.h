#ifndef SPACE_ASTRONOMICALOBJECT_H
#define SPACE_ASTRONOMICALOBJECT_H
#include <iostream>
#include<vector>

#include "AstronomicalPhenomenon .h"
//#include "Star.h"

class AstronomicalObject  {

    protected:
        std::vector<AstronomicalObject> vect;
        std::string name;
        double mass;
        double circumference;
        double temperature;
        double gravitationalAcceleration;
        double massPers;
        double weightForce;
        astronomicalPhenomenon *ap ;

    public:
        AstronomicalObject(std::string name, float mass, double circumference, double temperature,
                           double gravitationalAcceleration);

    AstronomicalObject();

    void observeFen( astronomicalPhenomenon &ap );
        void func(AstronomicalObject *a );
        virtual void Calculum ();
        string getname();
        virtual void add (AstronomicalObject &a);
       void display(vector<AstronomicalObject *> vect);

        // void add(satellite Sa);

   // void add(star S);
    void Display();
};


#endif //SPACE_ASTRONOMICALOBJECT_H
