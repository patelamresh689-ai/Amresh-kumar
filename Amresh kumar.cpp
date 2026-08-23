#include <iostream>
using namespace std;

class student {
    public:
    int roll ;
    string name ;
    static string college;
};

string student :: college = "Lpu";


int main(){

    student s1 ;
    student s2 ;

    
    s1.name = "Amresh kumar";
    s1.roll = 39;
    s2.name = "Ankit kumar";
    s2.roll = 40;
    cout<< "Roll no = "<<s1.roll<<endl;
    cout<< "name = "<<s1.name<<endl;
    cout<< "college = "<<s1.college<<endl;

    cout<< "Roll no = "<<s2.roll<<endl;
    cout<< "name = "<<s2.name<<endl;
    cout<< "college = "<<s2.college;
    
    s1.name = "Amresh kumar";
    s1.roll = 39;
    return 0;
}