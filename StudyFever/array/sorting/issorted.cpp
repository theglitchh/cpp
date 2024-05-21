#include <iostream>
using namespace std;

class Solution {
public:
    int sorted(int arr[], int &n) {
        bool issorted = false;
        if(n == 1){
            return 1;
        }
for(int i= 0; i <n-1; i++){
    if(arr[i]<= arr[i+1]){
 issorted= true;
    }else if(arr[i] > arr[i+1]){
        issorted = false;
        break;
    }
}if(issorted == true){
    cout << "true";
return 1;

}else
cout << "false"; 
return -1;


    }
};

int main() {
    Solution s;
    int arr[]={1,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    s.sorted(arr,n);

   return 0;
}