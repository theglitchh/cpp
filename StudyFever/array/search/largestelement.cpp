#include <iostream>
using namespace std;

class Solution {
public:
    int largestelement(int arr[], int &n) {
        int dummyindex=0;
        int secondindex=0;
for(int i=1; i<n; i++){
if(arr[i]> arr[dummyindex]){
    dummyindex = i;
}
}
for(int j =0; j<n; j++){
    if(arr[j]>arr[secondindex] && arr[j] < arr[dummyindex]){
        secondindex = j;
    }
}
cout << secondindex;
return secondindex;

    }
};

int main() {
    Solution s;
    int arr[]={1,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    s.largestelement(arr,n);

   return 0;
}