#include <iostream> 
using std::cout; using std::endl;


class Si{


    float p;
    int   t;
    const float r;
    public: 
    Si():r(2.5){ // initialise a constant data member using empty constructor 

    }
void read (float p, int t){
  this ->  p=p;
   this ->  t=t;
}
float show()
{
    return (p*t*r)/100;
}
};


int main (){

    Si s;
    s.read(1000,10);
    cout << s.show() << endl;
    getchar;
}
