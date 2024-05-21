#include<iostream>
#include <cstring>
#include <unordered_map>
using namespace std;


bool isanagram(string &s1, string &s2){
unordered_map<char,int>um;

for(char c : s1){
    um[c]++;
}
for(char c : s2){
    um[c]--;
}
for(auto x : um){
    if(x.second != 0){
        return false;
    }
}

return true;
}

int main(){
string s1 = "ABCD";
string s2 = "ACDB";
bool isa = isanagram(s1,s2);

cout << boolalpha << isa << endl;
    return 0;
}