#include <iostream>
using namespace std;

class Solution {
public:
    int leftrotation(int arr[], int &n) {
    int lastelement = arr[0];
    for(int i = 0; i < n; i++){
        arr[i]=arr[i+1];
    }arr[n-1] = lastelement;
    for(int k=0; k<n ; k++){
        cout << arr[k] << " ";
    }
    }
};

int main() {
    Solution s;
    int arr[]={1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    s.leftrotation(arr,n);

   return 0;
}