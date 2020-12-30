#ifndef SPACE_CONSTELLATIONS_H
#define SPACE_CONSTELLATIONS_H
#include <string>
#include<iostream>
using namespace std;

class constellations{
private:
    string hemisphere;
    string form;
    string name;

    constellations();
public:
    constellations(string name, string hemisphere, string form );

public:
    void constellationsInform (ostream& os);

    friend ostream& operator<<(ostream& os, const constellations& );
};


#endif //SPACE_CONSTELLATIONS_H
