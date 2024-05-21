#include <iostream>
using namespace std;

class Solution {
public:
    int zeros(int arr[], int &n) {
       int res=0;
      for(int i = 0; i<n; i++){

    if(arr[i] == 0){
     res = i;
     for(int j = i+1; j<n; j++){
        if(arr[j] != 0){
            swap(arr[res], arr[j]);
            res++;
        }
     }
    }

      } for (int k = 0 ;k<n ;  k++) {
        cout << arr[k] << " ";
      }

    }
};

int main() {
    Solution s;
    int arr[]={10,5,0,0,8,0,9,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    s.zeros(arr,n);

   return 0;
}