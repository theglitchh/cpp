#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
unordered_map<string, int> um;
um["so"] = 1;
um["ur"] = 10;
um["av"] = 100;
um.insert({"Gope",1000});

for(auto x:um) {
    cout << " " << x.first << " " << x.second ; 
}

    return 0;
}