//
// Created by MDand on 2019-12-06.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP

#include <vector>

using namespace std;

template <typename STL, typename T>
class heap {

private:
    void heapify() {

    }

public:
    vector<T> data;

    heap(STL stl) {
//        copy(stl.begin(), stl.end(), data.begin());
        for (T item: stl) {
            this->data.push_back(item);
        }
    }

    void push(T element) {

    }

    T pop() {

    }

    int size() {

    }

    bool is_empty() {
        return data.empty();
    }

    void clear() {

    }



};

template <typename STL, typename T>
ostream& operator<<(ostream& os, const heap<STL,T>& h) {
    for (auto it = h.data.begin(); it != h.data.end(); it++) {
        os << *it;
        if (it != h.data.end() - 1) {
            os << ", ";
        }
    }
    return os;
}
#endif //HEAP_HEAP_HPP
