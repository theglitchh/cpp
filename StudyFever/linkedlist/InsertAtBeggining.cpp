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
cout << traverse_ptr->data << " ";
solve(head, traverse_ptr->next);

 
}

void InsertAtPos(node* newval, node* &head, int pos){

node *traving;
traving = head;
int lastposition=1;

cout << ends << "the head is : " << traving->data << endl; 

if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1) {
        newval->next = head;
        head = newval;
        return;
    }
    
for(int i=1; i<pos- 1; i++){

if (traving == nullptr) {
            cout << "Position out of bounds" << endl;
            return;
        }

traving = traving->next;
}
  if (traving == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

node* nextval;
nextval = traving->next;
traving->next = newval;
newval->next = nextval;
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
int pos = 2;
InsertAtPos(newval, head, pos);
 traverseptr = head;
 solve(head, traverseptr);
    return 0;
}
