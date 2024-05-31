#include <iostream>
using namespace std;

struct mystack{
int cap;
int top;
int data;
mystack* next;

mystack(int c){
 
    data = c;
    next = nullptr;
    top = 0;
}
void push(mystack* &head, int x);
void pop();
int peek();
int size();
};


void mystack::push(mystack* &head, int x){
     mystack* insertval = new mystack(x);
     mystack* iterator_ptr = head;
    if(top==0){
       
        head = insertval;
        top++;
        cout <<" inserted value " << x <<" at position " << top << endl;
        return;
    }else if(top > 0){
        while( iterator_ptr->next != nullptr){
           
            iterator_ptr = iterator_ptr->next;
             
                    }
                    iterator_ptr->next = insertval;
                    insertval->next = nullptr;
                     top++;
                    cout <<"pushed value " << x <<" to position "<< top << endl;
    }
}

void mystack::pop(){
}

int mystack::peek(){
}

int mystack::size(){
        return top;
}

int main() {
mystack s(6);
mystack* head;
head = nullptr;
s.push(head,10);
s.push(head,20);
s.push(head,30);

    return 0;
}
