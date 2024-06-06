#include <iostream>
using namespace std;

struct DQueue{

int cap;
int size;
int front;
int *arr;

DQueue(int c){
cap = c;
size = 0;
arr = new int[cap];
front = 0;
}
 void insertfront(int x);
 void insertrear(int x);
 void deleteFront();
 void deleteRear();
 void display(){
    for (int i = 0; i<size; i++){
        cout << arr[(front + i)% cap] << " ";
    }cout << endl;
 }
};

void DQueue::insertfront(int x){
    if(size ==  cap){return;}
if(size == 0){
    arr[size] = x;
    size++;
}else{
front = (front -1+cap) % cap;
arr[front] = x;
size ++;
}
display();

}

void DQueue::insertrear(int x){
    if(size == cap){return;}
    if(size == 0){
        arr[size] = x;
        size++;
    }else{
      int  rear = (front + size - 1)% cap;
      rear = (rear + 1)% cap;
      arr[rear] = x;
      size++; 
    }
    display();
}

void DQueue::deleteFront(){
    if(size == 0){
        cout << "Queue already empty" << endl;
        return ;
    }else{
        front = (front + 1) % cap;
        size --;
    }
    display();
}

void DQueue::deleteRear(){
    if(size == 0){
        cout << "Queue already empty" << endl;
        return ;
    }else {
        size --;
    }
    display();
}



int main() {
    int c = 4;
    DQueue Q(c);
    int _1st = 10;
    int _2nd = 20;
    int _3rd = 30;
    int _4th = 40;
Q.insertfront(_1st);
Q.insertfront(_2nd);
Q.insertfront(_3rd);
Q.deleteRear();


    return 0;
}
