#include <iostream>
#include <cstring>
using namespace std;

class constellations{
public:

    char *name;
    char *hemisphere;
    char *form;

    constellations(){
        name = new char[50];
        strcpy(name, "necunoscut");
        form = new char[50];
        strcpy(form, "necunoscuta");
        hemisphere = new char[50];
        strcpy(hemisphere, "necunoscuta");

    }

    constellations(char *nameC, char *hemisphereC, char *formC )
    {
        name = new char[strlen(nameC)+1];
        strcpy(name,nameC);
        hemisphere = new char[strlen(hemisphereC)+1];
        strcpy(hemisphere, hemisphereC);
        form = new char[strlen(formC)+1];
        strcpy(form ,formC );
    }
    constellations(const constellations &Cygnus) {

        name = new char[strlen(Cygnus.name)+1];
        strcpy(name,Cygnus.name);
        form = new char[strlen(Cygnus.form) + 1];
        strcpy(form, Cygnus.form);
        hemisphere= new char[strlen(Cygnus.hemisphere) + 1];
        strcpy(hemisphere, Cygnus.hemisphere);
    }
    string gethemisfera(){
        return hemisphere;
    }
    string getform(){
        return form;
    }
    ~constellations(){
        delete []hemisphere;
        delete []name;
        delete []form;

    }
public:
    void  constellationInformation(){
        cout <<"The name constellation: ";
        cout <<name << endl;
        cout << "The shape of the constellation: ";
        cout <<form<< endl;
        cout <<"The hemisphere in which the constellation is located: ";
        cout <<hemisphere<< endl;
    }
};


class planet
        {
public:
    char *name;
    int nrSatellites;
    float circumference;
    float gravity;

    planet(){

        name = new char[50];
        strcpy(name, "necunoscut");
        nrSatellites = 0;
        circumference = 0;
        gravity = 0;
        //nrPlanet = 0;
    }

    planet(char *nameP, int nrSatellites, float circumference, float gravity)
    {
        name = new char[strlen(nameP)+1];
        strcpy(name,nameP);
        this->nrSatellites= nrSatellites;
        this->circumference=circumference;
        this->gravity=gravity;

    }

  planet (const planet &plnt)
   {
       name = new char[strlen(plnt.name)+1];
       strcpy(name,plnt.name);
       nrSatellites = plnt.nrSatellites;
       circumference = plnt.circumference;
       gravity= plnt.gravity;

   }

   virtual ~planet(){

        delete []name;
    }

   int getnrSattelites(){
        return nrSatellites;
    }
    float getcircircumference(){
        return circumference;
    }
    float getgravity(){
        return gravity;
    }


public :
    void printPlanet(){

        cout << endl;
        cout <<"Name: "<<name<<"\n";
        cout <<"Number of sattelits: "<<nrSatellites<<"\n";
        cout <<"Gravity of the planet in: "<<gravity<<" m/s2 "<<"\n";
        cout<<"Circumference: "<<circumference<<" km"<<"\n";
        cout << endl;

        }
public:

    void addSattelits(){
        nrSatellites++;
    }
    };

class astronomicalPhenomenon {
public:
    char *namePhenomenon;
    char *duration;
    char *date;

    astronomicalPhenomenon(){
        namePhenomenon = new char[50];
        strcpy(namePhenomenon, "necunoscut");
        duration = new char[50];
        strcpy(duration, "necunoscuta");
        date = new char[50];
        strcpy(date, "necunoscuta");

    }

    astronomicalPhenomenon(char *nameA,char *durationA, char *dateA )
    {
        namePhenomenon = new char[strlen(nameA)+1];
        strcpy(namePhenomenon,nameA);
        duration = new char[strlen(durationA)+1];
        strcpy(duration, durationA);
        date= new char[strlen(dateA)+1];
        strcpy(date ,dateA );
    }

   astronomicalPhenomenon( astronomicalPhenomenon &Eclipse) {
       namePhenomenon = new char[strlen(Eclipse.namePhenomenon)+1];
       strcpy(namePhenomenon,Eclipse.namePhenomenon);
       duration = new char[strlen(Eclipse.duration)+1];
       strcpy(duration,Eclipse.duration);
       date = new char[strlen(Eclipse.date)+1];
       strcpy(date,Eclipse.date);

   }


public:
  string getdate(){
        return date ;
    }
public:
    string getduartion(){
        return duration ;
    }
    ~astronomicalPhenomenon(){
        delete []namePhenomenon;
        delete []duration;
        delete []date;
    }
public :
    void printastronomicalPhenomenon(){
        cout <<endl;
        cout <<"Name: "<<namePhenomenon<<endl;
        cout <<"Duration: "<<duration<<endl;
        cout <<"Date: "<<date<<endl;
        cout <<endl;
    }
};

int main(){

    planet Earth ( "Earth",1,40.075,9.807);
    Earth.printPlanet();

    planet Venus( "Venus",0,38.025,8.87);
    Venus.printPlanet();

    planet Mercury( "Mercury",0,15.329,3.7);
    Mercury.printPlanet();

    planet Mars( "Mars",2,21.344,3.711);
    Mars.printPlanet();

    astronomicalPhenomenon Eclipse("Eclipsa de luna ","2:00:00","23:04:2020");
    Eclipse.printastronomicalPhenomenon();

    constellations Cygnus("Cygnus", "Nordica","Lebada");
    Cygnus.constellationInformation();

    return 0;
}