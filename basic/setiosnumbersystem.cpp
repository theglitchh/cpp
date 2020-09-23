#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include<iomanip>

int main()

{
    //here with the ios::oct we can convert the ios number to octral number
    //similarly we can convert it to hex , decimal , etc with ::hex , ::dec

std::cout/* << std::setw(10)*/ << std::setiosflags(std::ios::oct) << 65;


}