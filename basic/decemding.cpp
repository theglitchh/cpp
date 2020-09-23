#include <iostream> 
using namespace std;

int main()
{ int n; int reverse=0; int rem;
cout << "enter a number :"; 
cin >> n;
 while (n!=0) { rem = n%10; 

 reverse=reverse*10+rem;
 n/=10;
 }
 cout << "reversed: "<< reverse<<endl;
 return 0;}