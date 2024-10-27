#ifndef PRIORITYQUEUE_HPP
#define PRIORITYQUEUE_HPP

#include "Heap.h"
#include <utility>

class PriorityQueue {
private:
    Heap<pair<int, int>> heap;

public:
    void insert(int value, int priority);
    pair<int, int> extractHighestPriority();
    bool isEmpty() const;
};
#endif
