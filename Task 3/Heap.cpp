#include "Heap.h"
#include <stdexcept>
using namespace std;
template <typename T>
void Heap<T>::heapifyUp(int index) {
    while (index > 0) {
        int parentIndex = (index - 1) / 2;
        if (data[index] > data[parentIndex]) {
            swap(data[index], data[parentIndex]);
            index = parentIndex;
        } else {
            break;
        }
    }
}

template <typename T>
void Heap<T>::heapifyDown(int index) {
    int size = data.size();
    while (index < size) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;
        if (leftChild < size && data[leftChild] > data[largest]) {
            largest = leftChild;
        }
        if (rightChild < size && data[rightChild] > data[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            swap(data[index], data[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

template <typename T>
void Heap<T>::insert(const T& element) {
    data.push_back(element);
    heapifyUp(data.size() - 1);
}

template <typename T>
T Heap<T>::extractMax() {
    if (isEmpty()) {
        throw out_of_range("Heap is empty");
    }
    T maxElement = data[0];
    data[0] = data.back();
    data.pop_back();
    if (!data.empty()) {
        heapifyDown(0);
    }
    return maxElement;
}

template <typename T>
T Heap<T>::extractMin() {
    if (isEmpty()) {
        throw out_of_range("Heap is empty");
    }
    int minIndex = 0;
    for (int i = 1; i < data.size(); ++i) {
        if (data[i] < data[minIndex]) {
            minIndex = i;
        }
    }
    T minElement = data[minIndex];
    data[minIndex] = data.back();
    data.pop_back();
    if (minIndex < data.size()) {
        heapifyDown(minIndex);
        heapifyUp(minIndex);
    }
    return minElement;
}


template <typename T>
bool Heap<T>::isEmpty() const {
    return data.empty();
}
template class Heap<pair<int, int>>;
