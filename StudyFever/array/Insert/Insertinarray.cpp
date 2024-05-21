#include <iostream>
using namespace std;

class Solution {
public:
    int superfunc(int arr[], int n, int x, int cap, int pos) {
        int idx = pos - 1;
        for (int i = n - 1; i >= idx; i--) {
            arr[i + 1] = arr[i];
        }
        arr[idx] = x;
        for (int i = 0; i < n + 1; i++) {
            cout << arr[i] << ",";
        }
        cout << endl;
        return (n + 1);
    }
};

int main() {
    Solution s;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int cap = 10;
    int pos = 2;
    int new_size = s.superfunc(arr, n, x, cap, pos);
    cout << "New size of array: " << new_size << endl;

    return 0;
}