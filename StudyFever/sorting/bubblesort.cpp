#include <iostream>
using namespace std;

int bubblesort(int arr[], int n){

int data;
    for(int i = 0; i<n-1; i++){
        for(int j =0; j<n-1-i; j++){
if(arr[j] > arr[j+1]){
            data = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = data;
        }
        }

    }
   

    for(int j = 0; j<n;j++){
cout << arr[j] << endl;
    }
    
    
}

int main() {
int arr[]={2,10,8,7};
int n = sizeof(arr)/sizeof(int);

int ss = bubblesort(arr,n);
//cout << ss << endl;

    return 0;
}
