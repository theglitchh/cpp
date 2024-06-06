#include <iostream>
using namespace std;

struct node{
int data;
node *next;
node (int x){
    data = x;
    next = NULL;
}

};

struct Queue{

node* front;
node* rear;
int size;

Queue(){
    front = nullptr;
    rear =  nullptr;
    size = 0;
}
void enque(int x, node* &iterator);
void deque();
};

void Queue::enque(int x, node* &iterator){
if(size == 0){
node* head = new node(x);
iterator = head;
front = head;
rear = head;
//head-> next = nullptr;
size++;
}else if(size != 0){
    node* newnode = new node(x);
    iterator->next = newnode;
    iterator = iterator->next;
    newnode->next = nullptr;
    rear = newnode;

}

}

void Queue::deque(){
   if(front == nullptr){
        cout <<" Queue is empty" << endl; 
        return;
    }else if(front != nullptr){
         node* temp = front;
front = front->next;
delete temp;
size --;
    }

    if(size == 0){
        rear = nullptr;
    }
    
    
}

int main() {
Queue Q;
node* head;
node* iterator = nullptr;
int _1st = 10;
int _2nd = 20;
int _3rd = 30;
int _4th = 40;
Q.enque(_1st, iterator);
Q.enque(_2nd, iterator);
Q.enque(_3rd, iterator);
Q.enque(_4th, iterator);

node* looper = Q.front;
while(looper != nullptr){
    cout << looper->data << " ";
    looper = looper->next;
} cout << endl;

Q.deque();
node* looper1 = Q.front;
while(looper1 != nullptr){
    cout << looper1->data << " ";
    looper1 = looper1->next;
}


    return 0;
}