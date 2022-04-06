#include "iostream"

using namespace std;

class circle;
class circle {

    float r;
    public:
    circle() {
    r =5;
    }
    circle(float r) {  // it has arguments so it is parameterzed constructor
        this -> r = r;

    }
    void showArea () {
        cout << 3.14 *r*r << endl;
    }
    ~circle() {
        
    }
};

int main (){

    circle c1;
    circle c2(10);
    c1.showArea();
    c2.showArea();
}