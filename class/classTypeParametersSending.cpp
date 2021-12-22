#include "iostream"
#include "string"
using namespace std;
class sample;
class sample {
    private:
    int a;

    public:
    void reada(){
        cout << "Enter a value: ";
        cin >>a;
    }
    void puta();
    
    
    /*todo */
    void big(sample s2){ // s1 big() is a parameter
        if (a>s2.a)
        cout << "a is big" << endl;
        else if ( a<s2.a)
        cout << "s2.a is big"   << endl;
        else  cout << "both are equal" << endl;
        }
};
void sample::puta(){
    cout << "a = " << a << endl;
}


int main (){
    sample s1, s2;
    s1.reada();
    s2.reada();
    s1.big(s2);
}
