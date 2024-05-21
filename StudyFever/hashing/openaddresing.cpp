#include <iostream>
#include <vector>
using namespace std;

class hashing{
public:

int *arr;
int cap,size;
void myhash(int c){
cap = c;
size = 0;
arr = new int[cap];
for(int i = 0; i<cap; i++){
    arr[i] = -1;
}
}

int hash(int key){

return key % cap;
}

bool search(int key){

for(int i= 0 ; i<cap; i++){
    int index = (hash(key) + i) % cap; 
    if(arr[index] == key && arr[index] !=-1){
        cout << "found the key at " << index << "th index" << endl;
        return true;
    }
    if (arr[index] == -1) {
                cout << key << " not found in the hash table." << endl;
                return false;
            }
}
cout << "searched the whole array and not found" << endl;
return false;
}
bool insert(int key){
for(int i= 0 ; i<cap; i++){
int index = (hash(key) + i) % cap;
if(arr[index] == -1 || arr[index] == -2){
    arr[index] = key;
     cout << "Inserted " << key << " at index " << index << endl;
     return true;
}
 
    
}

 cout << "Hash table is full. Cannot insert " << key << endl;
return false;
}
bool erase(int key){

for (int i = 0; i < cap; i++) {
            int index = (hash(key) + i) % cap;
if(arr[index] == key){
    arr[index] = -2;
    cout << "key " << key << " found at index" << index << " and deleted"<< endl;
    return true;
}
}
cout << "key not found or deleted" << endl;
return false;
}

   ~hashing() {
        delete[] arr; // destructor
    }



};


int main(){

hashing hashclass;
int c = 7;
hashclass.myhash(c);
hashclass.insert(30);
hashclass.insert(23);
hashclass.insert(25);
hashclass.insert(31);
hashclass.insert(28);
hashclass.search(25);






    return 0;
}