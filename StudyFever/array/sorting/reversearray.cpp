#include <iostream>
using namespace std;

class Solution {
public:
    int reversearray(int arr[], int &n) {
    int newarr[n];
    int a=0;
        for(int i = n-1 ; i>=0; i--){
           newarr[a] = arr[i];
           a++;
            
        }for(int k = 0; k<n;k++){
            arr[k]=newarr[k];
            cout << newarr[k] << " ";
        }
    
    

    }
};

int main() {
    Solution s;
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    s.reversearray(arr,n);

   return 0;
}