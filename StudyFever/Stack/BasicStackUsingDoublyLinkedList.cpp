#include <iostream>
using namespace std;

struct mystack{
int cap;
static int top;
int data;
mystack* next;
mystack* prev;

mystack(int c){
 
    data = c;
    next = nullptr;
    prev = nullptr;
}
void push(mystack* &head, int x);
void pop(mystack* &head);
int peek();
int size();
};
int mystack::top = 0;


void mystack::push(mystack* &head, int x){
     mystack* insertval = new mystack(x);
     mystack* iterator_ptr = head;
    if(top==0){
       
        head = insertval;
        top++;
        cout <<" inserted value " << x <<" at position " << top << endl;
        return;
    }else if(top > 0){
       head->prev = insertval;
       insertval->next = head;
       head = head->prev;
       top++;
      cout <<" inserted value " << x <<" at position " << top << endl;
      return;
    }
}

void mystack::pop(mystack* &head){
    if(top == 0){
        cout <<"stack underflow"<<endl;
    }
    else {
        mystack* temp = head;
       head=head->next;
           if (head != nullptr) {
            head->prev = nullptr;
        }
       cout << "Poped element " << temp->data << " at position "<< top <<endl;
       delete temp;
       
       top--;
       
    }
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
s.pop(head);
    return 0;
}
