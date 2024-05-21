#include <iostream>
using namespace std;

int solve(int arr[], int n)
{
 int low =0;
 int high =n-1;
 int mid =(low+high)/2;
int left[n+1];
int right[high-mid];

for(int i =0; i<=mid; i++){
left[i] = arr[i];
}
int a =0;
for(int i =mid+1; i<n; i++){
right[a] = arr[i];
a++;
}

for(int i =0; i<mid; i++){

if(left[i] <= right[i]){
    arr[i] = left[i];
}else{
    arr[i]=right[i];
}
}
for(int i =0; i<n; i++){
cout << arr[i] << ",";
}
return -1;

}
int main() {
int arr[]={10,15,20,40,8,11,55};
int n = sizeof(arr)/sizeof(n);
int ss = solve(arr,n);
cout << ss << endl;

    return 0;
}
