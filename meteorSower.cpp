#include<iostream>
using namespace std;
#include "AstronomicalObject.h"
#include "meteorShower.h"

meteorShower::meteorShower(string namePhenomenon,string date,string parentBody){
    this->namePhenomenon =namePhenomenon;
    this->date = date;
    this->parentBody=parentBody;
}
void meteorShower::DifFen(){
    cout << " Observa fenomen de tip ploaie de meteoriti";
}
