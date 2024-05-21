#include <iostream>
using namespace std;

class Solution {
public:
    int removeduplicate(int arr[], int &n) {
int arr2[n];
int j = 0;
for(int i=0; i<n; i++){
  if(arr[i] == arr[i+1]){
    arr2[j]= arr[i];
    j++;
  } 
}
for(int k = 0;k<n;k++){
arr[k] = arr2[k];
//cout << arr2[k] <<",";
n--;
}
return n;
    }
};

int main() {
    Solution s;
    int arr[]={1,1,2,2,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    s.removeduplicate(arr,n);
    for(int i = 0; i < n; i++){
       cout<< arr[i] <<" ";
    }
   return 0;
}