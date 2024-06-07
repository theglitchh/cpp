#include <iostream>
#include <stack>
using namespace std;


struct node{
int data;
node* left;
node* right;

node(int d){

data = d;
left = nullptr;
right = nullptr;
}

};

struct tree{

void inorder(node* root){
if(root !=nullptr){
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
}

void preorder(node* root){
if(root != nullptr){
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
}

void postorder(node* root){
    if(root != nullptr){
        postorder(root->left); 
        postorder(root->right); 
        cout << root->data << " ";
    }
}

void printdistance(int k, node* root){
    if(root == nullptr){
        return;
    }
if(k == 1){
    cout << root->data << " ";
    return;
}

printdistance(k-1,root->left); //10
printdistance(k-1, root->right);


}

void BreadthFirstSearch(int height, node* root){
  int  CurrentHeight = height;
  while(height != 0){
    printdistance((CurrentHeight-(height-1)),root);
    height --;
  }  
}

void SearchMax(node* root){
    if(root == nullptr){
        return;
    }
    stack<node*>s;
    s.push(root);
while (!s.empty()){
    node* current = s.top();
    s.pop();
    if(current->left !=nullptr){
        if(current->left->data > current->data)
        {
        s.push(current->left);
        }

    }
     if(current->right !=nullptr){
        if(current->right->data > current->data)
        {
        s.push(current->right);
        }

    }

    }
    node* maxval = s.top();
    cout << maxval->data << endl;
} 

};

int main() {
tree t;
node* root;
root = new node(10);
node* temp = root;
node* _2nd = new node(20);
temp->left = _2nd;
node* _3rd = new node (30);
temp->right = _3rd;
node* _4th = new node(40);
_2nd->left = _4th;
node* _5th = new node(50);
_2nd->right = _5th;
node* _6th = new node(70);
_5th->left = _6th;
node* _7th = new node(80);
_5th->right = _7th;
node* _8th = new node(60);
_3rd->right = _8th;


//t.inorder(root);
//t.preorder(root);
//t.postorder(root);
// int height = 4;
// int k;
// t.printdistance(k,root);
// t.BreadthFirstSearch(height,root);
t.SearchMax(root);
    return 0;
}
