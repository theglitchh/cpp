#include <iostream>
using std::abort;  
using std::endl;


class inheritance_learn
{
int  a=20;
public:
int b=10;

};

class inheritance_learn_1 : public inheritance_learn
{
public:
void inheritance_learn_1_fun()
{
std::cout<< b <<endl;
}
};

int main (){
    inheritance_learn_1 i1;
    i1.inheritance_learn_1_fun();
}