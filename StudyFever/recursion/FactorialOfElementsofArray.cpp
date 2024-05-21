#include <iostream>
using namespace std;

int solve( int x)
{
  if(x<=0){
    return 1;
  }
  cout << x << endl;
  return  solve(x-1) * x ;
   

  return -1;
}

int main() {
  int arr[] = {1,2,6,4};  
  int n = 3;
  int x=arr[2];
int ss = solve(x);
cout << ss << endl;

    return 0;
}
