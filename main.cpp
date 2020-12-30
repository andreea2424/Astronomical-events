#include <iostream>
#include <cstring>
using namespace std;

class constellations{
private:
    string hemisphere;
    string form;
    string name;

    constellations(){
        this->name = name;
        this->form = form;
        this->hemisphere = hemisphere;
    }
public:
    constellations(string name, string hemisphere, string form )
    {
        this->name = name;
        this->form = form;
        this->hemisphere = hemisphere;
    }
public:
    void constellationsInform (ostream& os)
    {
        os <<"The name constellation: ";
        os <<name << endl;
        os << "The shape of the constellation: ";
        os <<form<< endl;
        os <<"The hemisphere in which the constellation is located: ";
        os <<hemisphere<< endl;
    }
    friend ostream& operator<<(ostream& os, const constellations& );
};
ostream& operator<<(ostream& os, constellations& cst)
{
    cst.constellationsInform(os);
    return os;
}

class astronomicalPhenomenon {

    string namePhenomenon;
    string duration;
    string date;

    astronomicalPhenomenon(){
        namePhenomenon =  "unknown";
        duration =  "unknown";
        date =  "unknown";
    }
public:
    astronomicalPhenomenon(string namePhenomenon,string duration,string date )
    {
        this->namePhenomenon =namePhenomenon;
        this->duration =duration;
        this->date= date;

    }


    string getdate(){
        return date ;
    }

    string getduartion(){
        return duration ;
    }

    void afisare_data()
    {
        cout << date;
    }
    void printastronomicalPhenomenon(ostream& os) {
        os << endl;
        os << "Name: " << namePhenomenon << endl;
        os << "Duration: " << duration << endl;
        os << "Date: " << date << endl;
        os << endl;
    }
    friend ostream &operator<<(ostream &os, const astronomicalPhenomenon &);
};
ostream& operator<<(ostream& os, astronomicalPhenomenon& Eclipse)
{
    Eclipse.printastronomicalPhenomenon(os);
    return os;
}

class star  {

private:

    string name;
    float rotationSpeed;
    double luminosity;
    double temperature;

public:
    star(string name, double temperature, float rotationspeed,
         double luminosity) {
    this-> name = name;
    this-> rotationSpeed= rotationspeed;
    this-> luminosity = luminosity;
    this->temperature = temperature;
    }

public:

    void InfStar (ostream& os) {
        os << endl;
        os << "Name: " << name << endl;
        os <<"Rostion speed: "<< rotationSpeed<<"km/s"<< endl;
        os << "Luminosity: " << luminosity <<"L☉" <<endl;
        os << "Temperature: "<<temperature<<"K"<< endl;
        os << endl;
    }
    friend ostream &operator<<(ostream &os, const star &);
};
ostream& operator<<(ostream& os, star& star1)
{
    star1.InfStar(os);
    return os;
}



class satellite
{
private:
    string name;
    float gravity;

public:
    satellite(string name, double temperature1, float gravity)
     {
        this->name = name;
        this->gravity= gravity;
        this->gravity=gravity;

    }
public:
    void printsatelitte(ostream& os) {
        os << endl;
        os << "Name: " << name << endl;
        os << "Temperature: " << gravity << endl;
        os << endl;
    }
    friend ostream &operator<<(ostream &os, const satellite &);
};
ostream& operator<<(ostream& os, satellite& Stl)
{
    Stl.printsatelitte(os);
    return os;
}
class planet {
    satellite *satellitePlanet;
    string name;
    int nrSatellites;
    float gravity;

    planet(string name, float mass, double circumference, double temperature)  {

        name = "unknown";
        nrSatellites = 0;
        gravity = 0;

    }

public:
    planet(string name, int nrSatellites ,float gravity)
   {
        this->name = name;
        this->nrSatellites = nrSatellites;
        this->gravity = gravity;

    }

    planet(string name, int nrSatellites ,float gravity, satellite *satellitePlanet)
            {
        this->name = name;
        this->nrSatellites = nrSatellites;
        this->gravity = gravity;
        this->satellitePlanet = satellitePlanet;

    }

    void observe (satellite *satellitePlanet ){
    }

    int getnrSattelites() {
        return nrSatellites;
    }
    float getgravity() {
        return gravity;
    }

    void addSattelits() {
        nrSatellites++;
    }


    void printPlanet(ostream &os) {

        os << endl;
        os << "Name: " << name << "\n";
        os << "Number of sattelits: " << nrSatellites << "\n";
        os << "Gravity of the planet in: " << gravity << " m/s2 " << "\n";

        //satellitePlanet->printsatelitte();
        os << endl;

    }
    friend ostream& operator<<(ostream& os, const planet& );
};
ostream& operator<<(ostream& os,planet& P )
{
    P.printPlanet(os);
    return os;
}


int main(){
    satellite Moon ("Moon",10.921,127);
    //cout << Moon;

    planet Earth ( "Earth",1,9.807, &Moon);
    cout << Earth;

    planet Venus( "Venus",0,8.87);
    cout <<Venus;

    planet Mercury( "Mercury",0,3.7);
    cout << Mercury;

    planet Mars( "Mars",2,3.711);
    cout << Mars;

    astronomicalPhenomenon Eclipse("Eclipsa de luna ","2:00:00","23:04:2020");
    cout << Eclipse;

    constellations Cygnus("Cygnus", "Nordica","Lebada");
    cout << Cygnus;


    return 0;
}