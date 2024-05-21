#include <iostream>
using namespace std;

int totalcount(int arr[], int n){
int a=1;
for(int i = 0; i<n-1; i++){
if(arr[i] != arr[i+1]){

a++;
}

}return a;

}

int main(){
    int arr[] = {1,2,3,4,4};
    int n = sizeof(arr)/sizeof(int);

int tc = totalcount(arr,n);
cout << tc << endl;
    return 0;
}