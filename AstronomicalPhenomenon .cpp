#include "AstronomicalPhenomenon .h"

#include <string>
#include<iostream>
using namespace std;


astronomicalPhenomenon::astronomicalPhenomenon(){
    namePhenomenon =  "unknown";
    date =  "unknown";
}

astronomicalPhenomenon::astronomicalPhenomenon(string namePhenomenon,string date )
{
    this->namePhenomenon =namePhenomenon;
    this->date= date;

}
void astronomicalPhenomenon::DifFen (){
    cout <<"Observa fenomen ";
}
void astronomicalPhenomenon:: afisare_data()
{
    cout << date;
}
void astronomicalPhenomenon::printastronomicalPhenomenon(ostream& os) {
    os << endl;
    os << "Name: " << namePhenomenon << endl;
    os << "Date: " << date << endl;
    os << endl;
}
ostream& operator<<(ostream& os, astronomicalPhenomenon& Eclipse)
{
    Eclipse.printastronomicalPhenomenon(os);
    return os;
}
