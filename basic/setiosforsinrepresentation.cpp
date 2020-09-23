#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include<iomanip>

int main()

{
// it wilkl show positive sign + before the number
//std::cout << std::setiosflags(std::ios::showpos) << 100;

//it wikll give the decimal points of 22/7
std::cout  << setiosflags(std::ios::showpoint) << 22/7 << std::endl;

// for scientific notation 

std::cout << std::setiosflags(std::ios::scientific) << 234.12345;
 }