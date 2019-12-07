//
// Created by MDand on 2019-12-06.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP

#include <vector>
#include <algorithm>

using namespace std;

template <typename STL, typename T>
class heap {

private:
    void heapify() {
        make_heap(data.begin(), data.end());
    }

public:
    vector<T> data;

    heap(STL& stl) {
        data = {stl.begin(), stl.end()};
        heapify();
    }

    void push(T element) {
        data.push_back(element);
        heapify();
    }

    T pop() {
        T head = *data.begin();
        data.erase(data.begin());
        heapify();
        return head;
    }

    int size() {
        return data.size();
    }

    bool is_empty() {
        return data.empty();
    }

    void clear() {
        data.clear();
    }

    static heap<STL, T> get_instance(STL stl) {
        return heap{stl};
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
