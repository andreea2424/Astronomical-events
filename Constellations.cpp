#include "Constellations.h"
#include "constellationsBuilder.h"
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
constellationsBuilder constellations::create(string name) { return constellationsBuilder{name}; }

ostream& operator<<(ostream& os, const constellations& cst)
{

    return os << cst.name
    << "The shape of the constellation: "<< cst.form << endl<< "The hemisphere in which the constellation is located: "
    << cst.hemisphere << endl;
}

constellations::constellations(const string &name) : name(name) {}

