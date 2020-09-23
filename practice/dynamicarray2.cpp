#include <iostream>

int main () {
    int **x;
    int nr;
    int nc;
    int r;
    int c;

    fflush(stdin);
    std::cout << "enter the rows and columns number"<< std::endl;
    std::cin >>nr>>nc;
    x= new int *[nr];
    for(r=0; r<nr; r++){ x[r]=new int [nc];}
std::cout << "enter "<< nr * nc << "elements";

for (r =0; r<nr; r++)
for (c=0;c<nc;c++)
std::cin >> x[r][c];
std::cout << "elemetns are ";
for (r=0;r<nr;r++)
{for (c=0; c<nc ; c++)
{std::cout << x[r][c] << std::ends;}
std:: cout << std::endl; }
    fflush(stdin);
    delete x;
    
}