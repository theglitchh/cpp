#include<iostream>
#include<vector>
using namespace std;

void vec(string s1, string s2){

for(int i = 0; i<s1.length(); i++){
    cout << s1.find(s2) << " " << endl;
}

}



int main(){
string s1 ="ABABABCD";
string s2 = "ABAB";
vec(s1,s2);
    return 0;
}