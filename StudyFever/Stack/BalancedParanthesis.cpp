#include <iostream>
#include <string>
#include<stack>
using namespace std;
bool isMatching(char a, char b);
bool isBalanced(string sa){
stack<int> s;
for(int i = 0; i<sa.length(); i++){
if(sa[i] == '(' || sa[i] == '{' || sa[i] == '['){
    
    s.push(sa[i]);
}else{
        if(s.empty() == true){
            return false;
        }else if(isMatching(s.top(),sa[i]) == false){
            return false;
        }else{
            s.pop();
        }
}
}
return(s.empty() == true);
}
bool isMatching(char a, char b){
return ((a=='(' && b == ')') || (a == '{' && b == '}')  || (a == '[' && b == ']') );
}

int main() {

string sa = "{{()}}";

bool answer = isBalanced(sa);
cout << boolalpha << answer << endl;
return 0;
}
