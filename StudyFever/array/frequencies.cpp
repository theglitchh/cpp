#include <iostream>
#include<unordered_map>
#include <vector>
using namespace std;

int frequencies(int arr[],int n){
unordered_map<int , int> um;
 for (int i = 0; i < n; i++) {
        um[arr[i]]++;
    }
for (auto x : um) {
        cout << "Element: " << x.first << ", Frequency: " << x.second << endl;
    }
}



int main(){

int arr[] = {1,2,3,4,4,5};
int n = sizeof(arr)/sizeof(int);

 frequencies(arr,n);
    return 0;
}