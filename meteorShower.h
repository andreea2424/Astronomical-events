//
// Created by Andreea Stanciu on 16.12.2020.
//

#ifndef SPACE_METEORSHOWER_H
#define SPACE_METEORSHOWER_H
#include <string>
#include<iostream>
#include "AstronomicalPhenomenon .h"

using namespace std;

class meteorShower :public astronomicalPhenomenon{
    double speed;
    int nrmeteor; //numbers of meteors per hour;
    string parentBody;
public:
    meteorShower(string namePhenomenon,string date,string parentBody);
    void DifFen();
};

#endif //SPACE_METEORSHOWER_H
