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

struct linkedlist{
node* head;

linkedlist(){
    head = nullptr;
}

void insert(int x){

node* newnode = new node(x);

if(head != nullptr){
    node* temp = head;
    while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
}
if(head == nullptr){
    head = newnode;
}
}

  void printList() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " "; 
            temp = temp->next; 
        }
        cout << endl;
    }

};

int main(){
linkedlist list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.printList(); 

    return 0;



}
