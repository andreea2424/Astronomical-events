#ifndef SPACE_ASTRONOMICALPHENOMENON_H
#define SPACE_ASTRONOMICALPHENOMENON_H

#include <string>
#include<iostream>
using namespace std;

class astronomicalPhenomenon {
protected:
    string namePhenomenon;
    string date;

    astronomicalPhenomenon();
public:
    astronomicalPhenomenon(string namePhenomenon,string date );
    string getdate();
    virtual void DifFen ();
    void afisare_data();
    void printastronomicalPhenomenon(ostream& os) ;
    friend ostream &operator<<(ostream &os, const astronomicalPhenomenon &);
};
#endif //SPACE_ASTRONOMICALPHENOMENON_H
