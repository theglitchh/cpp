#include<iostream>
using namespace std;

int simplesearch(int arr[],int n, int x){
int i;
for(i =0; i<n; i++){
    if(arr[i] == x){
        break;
    }
    
}
return i;
}


int main(){

int arr[]={1,2,3,4,5};
int x=4;
int n =sizeof(arr)/sizeof(int);
int ss = simplesearch(arr,n,x);
cout << ss << endl;
    return 0;
}