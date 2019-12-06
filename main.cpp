#include <iostream>
#include <vector>
#include "heap.hpp"

using namespace std;

int main() {

    vector<int> v;
    v.push_back(2);
    v.push_back(3);

    heap<vector<int>, int> h{v};

    cout << h << endl;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}