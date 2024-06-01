#include <iostream>
#include <string>
#include <stack>
using namespace std;

void solve(string str) {
    stack<string> s;
    string a;
    
    for (char x : str) {
      if(x != ' ' && x != '/' && x != '*' && x != '+' && x != '-'){
        a+=x;
      }else if(x == ' '){
        if (!a.empty()) {
                s.push(a);
                a.clear();
            }
      }else if(x =='/' || x =='*' || x =='+' || x =='-'){
        
        string b = s.top();
        s.pop();
        string c = s.top();
        s.pop();
        string d = "( "+c+" "+x+" "+b+" )";
        s.push(d);

      }
    }
    
    // Handle the case where the last token is a number
    if (!a.empty()) {
        s.push(a);
    }
    
    // The final result is the only element remaining on the stack
    if (!s.empty()) {
        cout << "The infix expression of '" << str << "' is: " << s.top() << endl;
    } else {
        cerr << "Error: Invalid expression" << endl;
    }
}

int main() {
    string str = "10 2 * 3 +";
    solve(str);
    return 0;
}
