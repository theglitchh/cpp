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

int main() {
node* head = nullptr;
node* firstval = new node(10);
head = firstval;
node* secondval = new node(20);
head->next = secondval;
node* thirdval = new node(30);
secondval->next = thirdval;
node* traverseptr = head;

 solve(head, traverseptr);
    return 0;
}
