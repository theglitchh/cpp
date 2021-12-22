#include <iostream>
#include <string>
#include <cmath>

class test;

class test {
    int a,b; // data members (private)
    public:
    void readata (int x, int y){
        a=x;
        b=y;
    }
       void showdata(){
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
    }

int big() {
    if ( a >b )
    return a;
    else if ( a < b )
    return b;
else 
return 
0;

}
};

int main (){
    test t;
    t.readata (30,30);
    t.showdata ();
   int Max = t.big(); // max variable holds return value of big();
   std::cout << "max value is : " << Max << std::endl;
   