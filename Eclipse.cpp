#include "AstronomicalPhenomenon .h"
#include "Eclipse.h"
#include <string>
#include<iostream>
using namespace std;

Eclipse::Eclipse ( string namePhenomenon, string duration, string type)
{
this->namePhenomenon =namePhenomenon;
this->duration= duration;
this->type=type;
}
void Eclipse::DifFen (){
    cout <<" Observa fenomen de tip eclipsa";
}
