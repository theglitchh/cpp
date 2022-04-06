#include <iostream>

using std::cout;
using std::endl;

class sample {

    int a;
    public:
    sample(int a){
        this->a = a;
    }
    void showData();
};


void sample::showData(){
    cout << a << endl;
}
int main (){

    sample s1(10), s2(20);
    s1.showData();
    s2.showData();

}