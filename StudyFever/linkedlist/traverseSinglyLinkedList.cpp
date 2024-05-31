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
void solve(node* head)
{
    node* traverse_ptr = head;
   while(traverse_ptr !=nullptr){
    cout << traverse_ptr->data << " ";
    traverse_ptr = traverse_ptr->next;
   } 
}

int main() {
node* head = nullptr;
node* firstval = new node(10);
head = firstval;
node* secondval = new node(20);
head->next = secondval;
node* thirdval = new node(30);
secondval->next = thirdval;


 solve(head);
    return 0;
}
