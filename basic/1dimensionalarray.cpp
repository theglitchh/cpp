#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include<iomanip>
#include <alloca.h>
// how to allocate the memory for 1 dimensional array
int main ()
{

    int n;
fflush(stdin); // for clscr

std::cout << "enter array size"; 
std::cin >> n;

int *p = new int[n] ;
for (int i = 0 ; i < n ; i++) std::cin>> p[i];

std::cout << "the locations are ";

for ( int i = 0; i < n; i++) std::cout << p[i];/**(p+i);*/

//delete p; // to release the memory
}