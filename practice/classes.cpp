#include <iostream>
 
#include "fstream"
 class subject {
     public:

     char slope;

    int pages;

 };

 int main ()
 {

subject book1;
book1.slope = 's';
book1.pages = 25;

std::cout << book1.pages << std::endl;
 }