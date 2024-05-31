#include <iostream>
using namespace std;

struct mystack{

int cap;
int* arr;
int top;

mystack(int c /*here x is the capacity*/){
cap = c;
top = -1;
arr = new int[c];
}
void push(int x);
void pop();
int peek();
int size();
};


void mystack::push(int x){
if(top == cap-1){
cout << "stack overflow" << endl;
return;
}else{
    top++;
arr[top] = x;
cout <<"pushed " << x <<" at location " << top << endl; 
}

}

void mystack::pop(){
   if(top == -1){
    cout << "stack underflow" << endl;
    return;
   }else {
    int result = arr[top];
    top--;
    cout << "Removed value " << result << " from location " << top+1 << endl;
   }
}

int mystack::peek(){
if(top == -1){
    cout << "Stack is Empty"<< endl;
    return -1;
}else{
    return arr[top];
}
}

int mystack::size(){
        return top+1;
    
}

int main() {
mystack s(6);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7); // this will trigger overflow
s.pop();
cout << s.peek() << endl; // as its non void , gotta call it from cout to print the return :)
cout << s.size() << endl;

    return 0;
}
