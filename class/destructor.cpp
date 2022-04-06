#include <iostream>

using namespace std;

class sample {
  int a;
  int b;
    public:
    sample(){
    a =10;
    b=20;
    }

    ~sample(){                                                       // destructor
        cout <<" a = " << a << endl;
        cout<< "b balue is " << b << endl;
    }
};

int main (){

    sample s;
}