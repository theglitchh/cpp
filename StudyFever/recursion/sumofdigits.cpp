#include <iostream>
using namespace std;


int sum(string s){

if(s.length() == 0){
    return 0;
}

int digit = s[0] - '0';

int finalsum =  digit + sum(s.substr(1));
return finalsum;


}
bool sumispalindrome(int mainsum){
if(mainsum == 0) {
    return true;
}
string astring = to_string(mainsum);

if(astring.length() == 0){
    return true;
}
 if (astring[0] != astring[astring.length()-1]) {
        return false;
    }
     return sumispalindrome(astring.length() - 2);

}


int main(){
int n =2144;
string s = to_string(n);
int l = s.length();
  int mainsum =  sum(s);
  
bool ispalindrome = sumispalindrome(mainsum);
cout << boolalpha << ispalindrome << endl;
  cout << mainsum << endl;

    return 0;
}