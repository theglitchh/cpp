#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solve(int arr[], int nums[], int n1, int n2)
{
vector<int> xd;
 for(int i=0; i<n1; i++){
xd.push_back(arr[i]);
 } 
  for(int i=0; i<n1; i++){
xd.push_back(nums[i]);
 }
 sort(xd.begin(),xd.end());

 for(int i =0; i <xd.size(); i++){
    cout << xd[i] << endl;
 }   
}

int main() {
int arr[]={10,15,20};
int nums[]={5,6,6,15};
int n1 =sizeof(arr)/sizeof(int);
int n2 =sizeof(nums)/sizeof(int);
int ss = solve(arr,nums,n1,n2);
cout << ss << endl;

    return 0;
}
