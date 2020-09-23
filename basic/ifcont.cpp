#include <iostream>
#include <cmath>
using namespace std;

int getMax( int num1, int num2, int num3){
int result;


if (num1 <= num2 && num1 <= num3) {

result = num1;
} else if ( num2 <= num1 && num2 <= num3) {

    result = num2;
} else {

    result = num3;
}
return result;
}

int main ()
{ 
int num1;
int num2;
int num3;
cout << "Input the 3 numbers: " << endl;
cin >> num1>>num2>>num3;
cout << "the smallest of them all are: \n" << getMax(num1,num2,num3);
return 0;}