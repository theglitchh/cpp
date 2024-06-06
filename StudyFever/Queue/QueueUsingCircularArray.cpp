#include <iostream>
using namespace std;

struct Queue{

int cap;
int size;
int *arr;
int front;

Queue(int c){
cap = c;
front = 0;
size = 0;
arr = new int[cap];
}
 void enque(int x);
 void deque();
};

void Queue::enque(int x){
if(size == 0){
    arr[0] = x;
    cout <<"First Element inserted "<< x <<" at position " << size << endl;
    size++;
}else if(size !=0 && size !=cap){
int rear = (front+size-1)%cap;
rear = (rear+1)%cap;
arr[rear] = x;
cout << "inserted element " << x << " at position " << rear << endl;
size++;
}
}

void Queue::deque(){
    if(size != 0){
   front = (front + 1)% cap;
size --;
       }
     
   int iterator = front;
   int rear = (front+size-1)%cap;
     cout << "Queue elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[(front + i) % cap] << " ";
    }cout << endl;
    }
 


int main() {
    int c = 4;
    Queue Q(c);
    int _1st = 1;
    int _2nd = 2;
    int _3rd = 3;
    int _4th = 4;
     int _5th = 5;
    
Q.enque(_1st);
Q.enque(_2nd);
Q.enque(_3rd);
Q.enque(_4th);

Q.deque();

Q.enque(_5th);
Q.deque();

    return 0;
}
