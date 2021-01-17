#include "Planet.h"
#include "Eclipse.h"
#include "meteorShower.h"
#include "Star.h"
#include "Constellations.h"
#include "constellationsBuilder.h"
#include <iostream>
int main() {

    planet *Pluto = new planet("Pluto",5,-247,0.62);
    planet *Neptune = new planet("Neptune",14,-201,11);
    planet *Uranus = new planet("Uranus",27,-197,8.87);
    planet* Saturn = new planet("Saturn",82,-139, 10.78);
    planet *Jupiter= new planet("Jupiter", 79, -108, 24.78);
    planet *Mars = new planet( "Mars",8,-60,8.07);
    planet * Earth =new planet( "Earth",1,20,9.8);
    planet *Venus = new planet("Venus",0,130,8.87);
    planet * Mercury = new planet("Mercury",0,167,3.7);
    star *Sun = new star("Sun");

    satellite *Moon = new satellite("Moon",10.921,127,1.62519);

    Eclipse Eclipse("Eclipsa de luna ","2:00:00","Anuala");
    meteorShower Perseidele("Perseide","12 August","Swift-Tuttle");
    AstronomicalObject *c = new AstronomicalObject("d",5,6,7,8);

    Moon->observeFen(Eclipse);
    Earth->observeFen(Perseidele);
    Earth->Calculum();

    vector<AstronomicalObject*> SistemSolar;

    SistemSolar.push_back(Pluto);
    SistemSolar.push_back(Neptune);
    SistemSolar.push_back(Uranus);
    SistemSolar.push_back(Saturn);
    SistemSolar.push_back(Jupiter);
    SistemSolar.push_back(Mars);
    SistemSolar.push_back(Earth);
    SistemSolar.push_back(Venus);
    SistemSolar.push_back(Mercury);
    SistemSolar.push_back(Sun);

     c->display(SistemSolar);

     constellations Cygnus = constellations::create("Cygnus")
             .is("Cygnus")
             .located("South")
             .has("bird");
     cout << Cygnus <<endl;



}
