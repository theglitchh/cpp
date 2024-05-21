#include<iostream>
using namespace std;

int firstoccurance(int arr[],int low,int high,int x){
if(low<=high){
int mid = (low+high)/2;

if(x < arr[mid]){
  return  firstoccurance(arr,low,mid-1,x);
}
else if (x > arr[mid]){
return firstoccurance(arr,mid+1,high,x);
}
else if (x == arr[mid]){
if(arr[mid-1] != x){
    return mid;

}else if(mid >=0 && arr[mid-1] == x){
return mid-1;
}
}


} return -1;
}

int main(){

int arr[]={22,22,33,44,44,55,55};
int n = sizeof(arr)/sizeof(int);
int low = 0;
int high = n-1;
int x = 55;

int fo = firstoccurance(arr,low,high,x);
cout << fo << " ";

    return 0;
}