#include <iostream>
using namespace std;

class book {
    public:
    int price;
    string name;
    int page_no;

};

int main(){
    book math;
    book reasoning;

    math.price = 400;
    math.name = "Rakesh yadav";
    math.page_no = 500;

    reasoning.price = 300;
    reasoning.name = "piyush varsheney";
    reasoning.page_no = 200;
    
    cout<< "price = " << math.price <<endl;
    cout<< "author = " << math.name <<endl;
    cout<< "page_no = " << math.page_no <<endl;

    cout<< "price = " << reasoning.price <<endl;
    cout<< "author = " << reasoning.name <<endl;
    cout<< "page_no = " << reasoning.page_no <<endl;

    return 0;
}