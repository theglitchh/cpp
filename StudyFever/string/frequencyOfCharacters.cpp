#include<iostream>
#include <string>
#include<unordered_map>
#include <vector>
using namespace std;

void frequency(string words){
vector<int> count(26,0);
for(int x: words){
count[x - 'a']++;
}
 for (int i = 0; i < 26; ++i) {  // Print counts for each letter
  if (count[i] != 0) {  
        cout << (char)('a' + i) << " " << count[i] << endl;
  }
    }

}

int main(){
string words="geeksforgeeks";
frequency(words);
    return 0;
}