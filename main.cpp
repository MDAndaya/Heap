#include <iostream>
#include <vector>
#include "heap.hpp"

using namespace std;
int main() {
    vector<int> temp{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Contents of vector before heapifying" << endl;
    for (int i: temp) {
        cout << i << " " << endl;
    }

    heap<vector<int>, int> my_singleton = heap<vector<int>, int>::get_instance(temp);
    cout << "Contents of my singleton of size " << my_singleton.size() << ": " << endl;
    cout << my_singleton << endl;
    cout << endl;

    cout << "Testing adding 666 to singleton" << endl;
    my_singleton.push(666);
    cout << my_singleton << endl;

    int popped = my_singleton.pop();
    cout << "Testing pop from singleton: " << endl;
    cout << "Popped: " << popped << endl;
    cout << my_singleton << endl;
    cout << endl;

    cout << "Is singleton empty?" << endl;
    string empty;
    my_singleton.is_empty() ? empty = "yeeeeee" : empty = "nooppppppe";
    cout << empty << endl;


    cout << "Clearing singleton" << endl;
    my_singleton.clear();
    cout << "Is singleton empty now?" << endl;
    my_singleton.is_empty() ? empty = "mhm" : empty = "NooOOOoOOooOOoOooOoo";
    cout << empty << endl;

    return 0;
}