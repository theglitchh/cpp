#include<iostream>
using namespace std;


bool ispalindrome(string g){
    int a = g.length()-1;
for(int i = 0; i<g.length() ; i++){
if(g[i] != g[a] && i <=a){
     cout << g[i] << " " << g[a] << endl;
    cout << "notmatched" << endl;
    return false;
} a--;
}
return true;

}

int main(){
string g= "geks";
bool istrue = ispalindrome(g);
cout << boolalpha << istrue << endl;
return 0;
}