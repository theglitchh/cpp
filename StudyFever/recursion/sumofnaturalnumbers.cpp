#include <iostream>
using namespace std;


int sumofnatural(int n){
if (n == 1){
    return 1;
}
int sum = n + sumofnatural(n-1);

return sum;

}
int main(){

int n = 4;

int k = sumofnatural(n);
cout << k << endl;
    return 0;
}