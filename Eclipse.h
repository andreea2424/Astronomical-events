#ifndef SPACE_ECLIPSE_H
#define SPACE_ECLIPSE_H

#include <string>
#include<iostream>
using namespace std;
#include "AstronomicalPhenomenon .h"

class Eclipse : public astronomicalPhenomenon{
    string duration;
    //total, annular, partial and hybrid
    string type;
public:
Eclipse( string namePhenomenon, string duration, string type);

public:
void DifFen ();
};
#endif //SPACE_ECLIPSE_H
