#include <iostream>
using namespace std;

struct node{
int data;
node* next;
node(int x){
   data = x;
   next = nullptr; 
}

};

int main() {
int a = 10;
int b= 20;
int c = 30;
node* head;
head = nullptr;
node* FirstDataValue = new node(a);
head = FirstDataValue;
node* SecondDataValue = new node(b);
head->next = SecondDataValue;
node* ThirdDataValue = new node(c);
SecondDataValue->next = ThirdDataValue;

node* temp = head;

while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
}

    return 0;
}
