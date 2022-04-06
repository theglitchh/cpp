#include "iostream"

using std::cout; using std::endl;


class Test{

    public:
    static int a;
void get(){
   
    cout << " a is " << a << endl;
}
};

int Test::a = 10;

int main () {

    Test::a = 100;
    Test t;
    t.get();
        cout << Test::a << endl;

}