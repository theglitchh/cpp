#include <iostream>
using namespace std;

bool subsequence(string &str1, string &str2){
int a = 0;
for(int i = 0 ; i<str1.length() && a<str2.length(); i++){
    if(str1[i] == str2[a] ){
       a++;
        
    }
}return (a == str2.length());

}

int main(){
string str1 = "ABCDE";
string str2 = "AED";
 bool issub = subsequence(str1,str2);
 cout << boolalpha << issub << endl;
    return 0;
}