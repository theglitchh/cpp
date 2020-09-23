#include <iostream>
#include <cmath>
using namespace std;

int main ()
{ 

bool isMale = true ;
bool isTall =false;

if ( isMale && isTall)
{cout << "you are a tall male"
 << endl;   /* code */
}
else if (isMale && !isTall)
{
cout << "you are a short male";
} else if(!isMale && isTall){
    cout << "you are tall but not male";

}else


{
    cout << " you are not a male";
}



    return 0;
}