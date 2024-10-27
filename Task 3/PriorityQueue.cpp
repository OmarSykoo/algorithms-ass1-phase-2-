#include "PriorityQueue.h"
#include <stdexcept>

void PriorityQueue::insert(int value, int priority) {
    heap.insert({priority, value});
}

pair<int, int> PriorityQueue::extractHighestPriority() {
    if (isEmpty()) {
        throw out_of_range("Priority queue is empty");
    }
    return heap.extractMax();
}

bool PriorityQueue::isEmpty() const {
    return heap.isEmpty();
}
