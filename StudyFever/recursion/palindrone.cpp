#include <iostream>
using namespace std;



bool palindrome(char astring[],int start, int end){
if ( start >=end){
    return true;
}
 if (astring[start] != astring[end]) {
        return false;
    }
     return palindrome(astring, start + 1, end - 1);

}


int main () {
    char astring[] = "abbcbba";
  int size=  sizeof(astring) / sizeof(astring[0]) - 1;
  bool a =  palindrome(astring,0, size-1);
  cout << boolalpha << a << ends;
    return 0;
}