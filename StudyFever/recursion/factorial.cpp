#include <iostream>
using namespace std;


int factorial(int n){
if (n == 0){
    return 1;
}
int sum = n * factorial(n-1);

return sum;

}
int main(){

int n = 4;

int k = factorial(n);
cout << k << endl;
    return 0;
}