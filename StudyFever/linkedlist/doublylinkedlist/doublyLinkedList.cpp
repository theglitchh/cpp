#include <iostream>
using namespace std;

struct node{
    int data;
    node* prev;
    node* next;
    

node(int x){
data = x;
prev = nullptr;
next = nullptr;
}

};

void traverse(node* head)
{

}

int main() {

node* head;
head = nullptr;
node* firstval = new node(10);
node* secondval = new node(20);
node* thirdval = new node(30);
head = firstval;
firstval->next = secondval;
secondval->next = thirdval;
secondval->prev = firstval;
thirdval->prev = secondval;


traverse(head);

    return 0;
}
