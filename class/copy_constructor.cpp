#include <iostream>

using namespace std;

class sample{

    int a,b;
    public:
    sample(int a, int b){

        this -> a = a;
        this -> b = b;
        
    }
    sample(sample &old){                    // copy constructor
      a= old.a;
      b = old.b;
    }

    void showdata(){
        cout << a << endl << b << endl;
    }
};


int main (){

    sample s1(10,20);  // invoke the parameteried constructor
    s1.showdata();
    sample s2(s1);

    s2.showdata();
}

