//
// Created by Andreea Stanciu on 17.01.2021.
//

#include "constellationsBuilder.h"

constellationsBuilder&  constellationsBuilder::is(string name) {
    cst.name = name;
    return *this;
}
constellationsBuilder&  constellationsBuilder::located(string hemisphere) {
    cst.hemisphere = hemisphere;
    return *this;
}
constellationsBuilder&  constellationsBuilder::has(std::string form) {
    cst.form = form;
    return *this;
}
