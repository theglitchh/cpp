#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include<iomanip>
#include <alloca.h>

int main ()
{
int *p ;
float *q ;
char *r;
// with new we can store the integer data 

p = new int (10);
q= new float (1.5);
r = new char ('x'); // for characters we use '' not a ""

std::cout <<  *q <<std::endl;
};