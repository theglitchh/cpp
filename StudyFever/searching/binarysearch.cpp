#include<iostream>
using namespace std;


int bs1(int arr[],int x, int n){
int midean = 0+n/2;
cout << "midean is " << midean << endl;

if(arr[midean] == x){
return x;
}
if(x < arr[midean]){
   for(int i=midean; i>=0; i--){
    if( arr[i] == x){
        return i;
    }
   } 
}
if(x > arr[midean]){
   for(int i=midean; i<n; i++){
    if( arr[i] == x){
        return i;
    }
   } 
}
return -1;
}

int main(){
int arr[] = {1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(int);
int x = 6;
int bs = bs1(arr,x,n);
cout << "x is located at " << bs << " index" << endl;
    return 0;
}