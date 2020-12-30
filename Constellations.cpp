#include "Constellations.h"
using namespace std;
constellations::constellations(){
    this->name = name;
    this->form = form;
    this->hemisphere = hemisphere;
}

constellations::constellations(string name, string hemisphere, string form )
{
    this->name = name;
    this->form = form;
    this->hemisphere = hemisphere;
}

void constellations :: constellationsInform(ostream &os) {
    os << "The name constellation: ";
    os << name << endl;
    os << "The shape of the constellation: ";
    os << form << endl;
    os << "The hemisphere in which the constellation is located: ";
    os << hemisphere << endl;
}
ostream& operator<<(ostream& os, constellations& cst)
{
    cst.constellationsInform(os);
    return os;
}


