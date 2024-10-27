#ifndef HEAP_HPP
#define HEAP_HPP
using namespace std;
#include <vector>

template <typename T>
class Heap {
private:
    vector<T> data;
    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(const T& element);
    T extractMax();
    T extractMin();
    bool isEmpty() const;
};
#endif
