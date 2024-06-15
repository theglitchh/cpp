#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Node " << i << ": ";
        for (int x : arr[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

void addEdge(vector<int> arr[], int u, int v) {
    arr[u].push_back(v);
    arr[v].push_back(u);
}

int main() {
    int _size_ = 4;
    vector<int> arr[_size_];

    addEdge(arr, 0, 1);
    addEdge(arr, 0, 2);
    addEdge(arr, 1, 2);
    addEdge(arr, 1, 3);

    display(arr, _size_);

    return 0;
}
