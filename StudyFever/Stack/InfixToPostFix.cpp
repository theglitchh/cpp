#include <iostream>
#include <string>
#include <stack>
using namespace std;

void solve(string str)
{
 stack<char> s;
for(char x: str) {
    if(x !='+' && x !='-' && x !='*' && x !='/'){
        cout << x;
    }else if(x =='+' || x =='-' || x =='*' || x == '/'){
        if(s.empty()){
            s.push(x);
        }else{
            if(x=='*' || x=='/'){
                if(s.top() == '*' || s.top() == '/' ){
                    cout << s.top();
                    s.pop();
                    s.push(x); 
                }else{
                    s.push(x);
                }
                
            }else if(x == '+' || x == '-'){
                    if(s.top() == '*' || s.top() == '/' || s.top() == '-' || s.top() == '+' ){
                        while(!s.empty()){
                            cout << s.top();
                            s.pop();
                        }
                        s.push(x);
                        
                    }
                }
        }
    }

}
while(!s.empty()){
    cout << s.top();
    s.pop();
}
}

int main() {
    string str = "a+b/c-d*e";
 solve(str);


    return 0;
}
    