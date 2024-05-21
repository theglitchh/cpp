#include <iostream>
#include <unordered_set>
using namespace std;

int totalcount(int arr[], int n){
unordered_set<int> lol;

for(int i = 0 ; i< n; i++){
    lol.insert(arr[i]);

}
return lol.size();

}

int main(){
    int arr[] = {1,2,3,4,4};
    int n = sizeof(arr)/sizeof(int);

int tc = totalcount(arr,n);
cout << tc << endl;
    return 0;
}