#include "iostream"

using namespace std;



//class test {
//public:
//int a,b;
//
//};
//
//int main ()
//{
//test t={10,20};
// return 0;     
//}




class test {
    int a,b; // data members (private)
public:
test(){                     //constructor      // default constructor  //user defined 
a=10;
b=20;

}
void getData();
};
void test::getData(){
    cout << a << "\n" << b << endl;
}
int main ()
{
test t;
t.getData();
return 0;     
}