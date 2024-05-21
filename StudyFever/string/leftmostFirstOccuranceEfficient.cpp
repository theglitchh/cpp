#include<iostream>
using namespace std;
const int CHAR = 256;
int leftmost(string str){

    bool Visited[CHAR];
    fill(Visited,Visited + CHAR, false);
    int res = -1;
    for(int i = str.length()-1; i>=0;i--){
        if(Visited[str[i]]){
            res=i;
        }else {Visited[str[i]] = true;}
    }
    return res;
}

int main(){

string str="geeksforgeeks";
int lftm = leftmost(str);
cout << lftm << endl;
    return 0;
}