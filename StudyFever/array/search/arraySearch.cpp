#include <iostream>
using namespace std;

int main(){

int arr[] = {1,4,3,4,2};

for(int i=0; i<=4; i++){

if(arr[i] == 2){
    cout << i-1;
}else if(arr[i] != 2){
cout << -1;
return -1;
}

}


return 0;

}