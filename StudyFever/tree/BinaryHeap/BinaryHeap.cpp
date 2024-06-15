#include <iostream>
using namespace std;

class MinHeap{
public:
int *arr;
int size;
int cap;

MinHeap(int c){
cap = c;
arr = new int[c];
size = 0; 
}
int left(int i){
    return (2*i+1);
}
int right(int i){
    return (2*i+2);
}
int parent(int i){
    return ((i-1)/2);
}

void insert(int x);
void display();
void swap1(int &a, int &b);
};

void MinHeap::insert(int x){
if(size == cap){
    cout <<"Heap is full" << endl;
    return;
}else if(size == 0){
size++;
arr[size-1] = x;
cout << "Inserted x at " << size-1 << endl;
}else{
    size++;
    arr[size-1]= x;
    int i = size-1;
    while(i!=0 && arr[parent(i)] > arr[i]){
        swap1(arr[parent(i)],arr[i]);
        i = parent(i);
    }
}
display();
}
void MinHeap::swap1(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}

void MinHeap::display(){
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}


int main() {
MinHeap mh(7);

mh.insert(1);
mh.insert(8);
mh.insert(3);
mh.insert(9);
mh.insert(4);
mh.insert(6);

    return 0;
}
