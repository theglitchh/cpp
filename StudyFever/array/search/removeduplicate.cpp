#include <iostream>
using namespace std;

class Solution {
public:
    int removeduplicate(int arr[], int &n) {
 int j = 0;
for(int i = 0; i < n; i++){

    if(arr[i] != arr[i+1]){
        arr[j++] = arr[i];
    }

} arr[j++] = arr[n - 1];
n=j;
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