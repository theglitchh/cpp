#include <iostream>
using namespace std;

class Solution {
public:
  int insert(int arr[],int n,int pos,int x, int cap){
if (cap == n){
    return -1;
}
for(int i = n; i>=0; i--){
if(i != pos-2){
   arr[i]= arr[i-1];
}
}arr[pos-1] = x;
for(int j = 0 ; j <= n; j++){
    cout  << arr[j] << ",";
}
return n+1;
  }
};

int main() {
   int arr[]={1,2,3,4};
   int n = end(arr)-begin(arr);
   int pos =2;
   int x = 7;
   int cap = 5;

Solution s;
s.insert(arr,n,pos,x,cap);
    return 0;
}