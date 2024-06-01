#include <iostream>
using namespace std;

struct Queue{

int cap;
int size;
int *arr;

Queue(int c){
cap = c;
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
}else if(size !=cap){
arr[size] = x;
cout << "inserted element " << x << " at position " << size << endl;
size++;
}
}

void Queue::deque(){
    if(size != 0){
   for(int i=1; i<size; i++){
        arr[i-1] = arr[i];
    }
    size --;
   int iterator = 0;
   while(iterator != size){
    cout << arr[iterator] << " ";
    iterator++;
   }
    }
 
}

int main() {
    int c = 10;
    
    Queue Q(c);
    int _1st = 1;
    int _2nd = 2;
    int _3rd = 3;
    int _4th = 4;
    
Q.enque(_1st);
Q.enque(_2nd);
Q.enque(_3rd);
Q.enque(_4th);

Q.deque();


    return 0;
}
