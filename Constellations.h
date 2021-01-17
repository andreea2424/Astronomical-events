#include <string>
#include<iostream>
using namespace std;
class constellationsBuilder;
class constellations{
private:
    string hemisphere;
    string form;
    string name;

    constellations();
public:
    constellations(string name, string hemisphere, string form );



    constellations(const string &name);

public:
    friend ostream& operator<<(ostream& os, const constellations& obj );
    friend class constellationsBuilder;
    static constellationsBuilder create(std::string name);
};


#endif //SPACE_CONSTELLATIONS_H
