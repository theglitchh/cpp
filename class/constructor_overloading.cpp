#include <iostream>
using namespace std;


class circle;

class circle {                  //default constructor
    float r;
    public:
    circle() {
 r = 5;
    }  
circle (float r) {              //parameterized constructor
    this -> r = r;
    
}
void showArea();
};
void circle::showArea(){
cout << "area is " << 3.14 * r * r << endl;
}
int main (){

circle c;
c.showArea();
}