#include <iostream>
using namespace std;

class car {
    public:
    int model;
    string name;
    int price;


};


int main(){

    car tata ;
    car maruti ;

    tata.model = 2024;
    tata.name = "thar";
    tata.price = 2500000;

    maruti.model = 2025;
    maruti.name = "sumo";
    maruti.price = 1200000;

    cout<< "model = "<< tata.model <<endl;
    cout<< "name = "<< tata.name <<endl;
    cout<< "price = "<< tata.price <<endl;

    cout<< "model =  "<< maruti.model <<endl;
    cout<< "name = "<< maruti.name <<endl;
    cout<< "price = "<< maruti.price;
    
    return 0;
}