#include "HeapSort.h"
using namespace std;
template <typename T>
void heapSort(vector<T>& arr) {
    Heap<T> heap;
    for (const auto& element : arr) {
        heap.insert(element);
    }
    for (int i = arr.size() - 1; i >= 0; --i) {
        arr[i] = heap.extractMax();
    }
}