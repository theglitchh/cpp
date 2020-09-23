#include <iostream>
using namespace std;

int main()
  { int input,
    sum =0;

    cout << "type any number: ";
    cin >>input; 

for ( int alpha = 1; alpha <= input; alpha++)
{ sum += alpha;}
cout << "sum = "
 << sum;
return 0;}