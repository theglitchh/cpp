#include <iostream>
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

struct BST{

void _delete_(node* item, node* &root){
if(root == nullptr){
    return;
}else{

    if(item->data < root->data){
        _delete_(item,root->left);
    }else if(item->data > root->data){
        _delete_(item,root->right);
    }else{

        if(root->left == nullptr && root->right == nullptr){
            
            delete root;
            root = nullptr;
            
        }else if((root->left != nullptr && root->right == nullptr) || (root->left == nullptr && root->right != nullptr)){
            if(root->left != nullptr){
                node* temp = root;
                    root = root->left;
                    delete temp;
            }else if(root->right != nullptr){
                  node* temp = root;
                    root = root->right;
                    delete temp;
                    
            }
        }else{
             node* successor = findMin(root->right);
                    root->data = successor->data;
                    _delete_(successor, root->right);

        }
    }
}


}
node* findMin(node* current){
    current = current->right;
    while(current != nullptr && current->left != nullptr){
        current = current->left;
    }
    return current; 

}



};

int main() {
BST t;
node* root;
root = new node(15);
node* first = new node(5);
node* second = new node(20);
node* third = new node(3);
node* fourth = new node(18);
node* fifth = new node(80);
node* sixth = new node(16);

root->left = first;
root->right = second;
first->left = third;
second->left = fourth;
second->right = fifth;
fourth->left = sixth;


//t.inorder(root);
//t.preorder(root);
node* newval = new node(15);
t._delete_(newval,root);

    return 0;
}
