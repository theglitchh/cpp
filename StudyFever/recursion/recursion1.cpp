#include <iostream>
using namespace std;

class Solution{
public:
   int recursion1(int n){

if( n == 0){
    return 0;
}

recursion1(n-1);
cout << n << endl;


}


};



int main(){
    int n = 5;
    Solution s;
    s.recursion1(n);
    return 0;
}