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
void solve(node* head, node* traverse_ptr)
{
if(head  == nullptr || traverse_ptr == nullptr){
    return;
} 
cout << traverse_ptr->data;
solve(head, traverse_ptr->next);

 
}

void InsertAtEnd(node* newval, node* head){

node* trav_ptr;
trav_ptr = head;
while(trav_ptr->next !=nullptr){
    trav_ptr = trav_ptr->next;
}
trav_ptr->next = newval;


}

int main() {
node* head = nullptr;
node* firstval = new node(10);
head = firstval;
node* secondval = new node(20);
head->next = secondval;
node* thirdval = new node(30);
secondval->next = thirdval;
node* traverseptr = head;

 //solve(head, traverseptr);

 node* newval = new node(5);

InsertAtEnd(newval, head);
 solve(head, traverseptr);
    return 0;
}
