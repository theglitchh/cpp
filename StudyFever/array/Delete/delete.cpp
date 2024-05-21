#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
int delete1(int arr[], int &n, int x){

int a=0;
for(int i=0; i<n; i++){
if(arr[i] == x){

for(int j=i; j<n-1; j++){
arr[j] = arr[j+1];
}
//n--;
}


}
return n -- ;
}

};

int main() {
   int arr[]={1,2,3,4};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 3;


Solution s;
s.delete1(arr,n,x);

 for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
         // cout << n << " ";
    return 0;
}