#include <iostream>
using namespace std;

int solve(int a)
{
if(a>=0 && a<=9){
    return a;
}

return solve(a%10) + solve(a/10);

}

int main() {
int a = 9111;
int ss = solve(a);
cout << ss << endl;

    return 0;
}
