//
// Created by Andreea Stanciu on 17.01.2021.
//

#ifndef SPACE_CONSTELLATIONSBUILDER_H
#define SPACE_CONSTELLATIONSBUILDER_H

#endif //SPACE_CONSTELLATIONSBUILDER_H
#include "Constellations.h"
class constellationsBuilder
{
    constellations cst;
public:

    constellationsBuilder(string name) : cst(name) {}
    operator constellations() const { return move(cst); }
    constellationsBuilder&  is(std::string name);
    constellationsBuilder&  located(std::string hemisphere);
    constellationsBuilder&  has(std::string form);

};