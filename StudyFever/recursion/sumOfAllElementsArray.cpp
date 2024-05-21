#include <iostream>
using namespace std;

int solve(int arr[], int n)
{
  if(n<=0){
    return 0;
  }
  cout << n << endl;
  return solve(arr,n-1) + arr[n-1];
   

  return -1;
}

int main() {
  int arr[] = {1,2,3,4};  
  int n = sizeof(arr)/sizeof(int);
int ss = solve(arr,n);
cout << ss << endl;

    return 0;
}
