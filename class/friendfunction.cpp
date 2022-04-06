#include <iostream>
using namespace std;

class sample{

    int a,b;

    public:
    friend void print(sample);
};

void print(sample s){
s.a= 10;
s.b=20;
cout << s.a << endl << s.b <<endl;

}

int main (){

    sample s;
    print(s);
}

