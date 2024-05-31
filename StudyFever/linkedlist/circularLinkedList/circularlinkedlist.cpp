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

void traverse(node* head)
{
    if (head == nullptr) {
        return;  
    }
    node* traverse_ptr;
    traverse_ptr = head;
    
    do{
     cout << traverse_ptr->data << " ";
     traverse_ptr = traverse_ptr->next;
    }while(traverse_ptr != head);
}

int main() {

node* head;
head = nullptr;
node* firstval = new node(10);
node* secondval = new node(20);
node* thirdval = new node(30);
head = firstval;
head->next = secondval;
secondval->next = thirdval;
thirdval-> next = head;

traverse(head);

    return 0;
}
