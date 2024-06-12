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
        postorder(root->left); // 80
        postorder(root->right); // 20  
        cout << root->data << " ";
    }
}

int height(node* root){
    if(root == nullptr){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

void inorder_without_recursion(node* root){
stack<node*> s;
//s.push(root);
node* current = root;
while(current != nullptr || !s.empty()){
while(current != nullptr){
    s.push(current);
    current = current->left;
}
current = s.top();
cout <<current->data << " ";
s.pop();
current = current->right;
//current = current->right;

}
}
void preorder_without_recursion(node* root){
stack<node*> s;
//s.push(root);
node* current = root;
while(current != nullptr || !s.empty()){
while(current != nullptr){
    s.push(current);
cout <<current->data << " ";
    current = current->left;
}
current = s.top();

s.pop();
current = current->right;
//current = current->right;

}
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
//cout << endl;
//int treeheight = t.height(root);
//cout << treeheight;
t.preorder_without_recursion(root);
    return 0;
}
