#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include<iomanip>

int main ()

{ // to get equal spaces for names and such
std::cout << std::setw(10) << std::setiosflags(std::ios::left) << "Rama" << std::endl;

std::cout << std:: setw(10) << std::setiosflags(std::ios::left) << "sourav";

std::cout<< "sup" <<std::endl;
// so sup is going to print after the 10 space we allocated on sourav

}