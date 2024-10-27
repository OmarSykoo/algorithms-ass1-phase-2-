#include <bits/stdc++.h>
#include "Heap.cpp"
#include "PriorityQueue.h"
#include "HeapSort.cpp"

using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
ll t=1;

void solve () {
    cout << "Heap Example:" << endl;
    Heap<int> heap;
    heap.insert(10);
    heap.insert(20);
    heap.insert(15);
    cout << "Max extracted element: " << heap.extractMax() << endl;
    heap.insert(5);
    cout << "Min extracted element: " << heap.extractMin() << endl;
    cout << "Max element after re-insertion: " << heap.extractMax() << endl;
    cout << "\nPriority Queue Example:" << endl;

    PriorityQueue pq;
    pq.insert(30, 3);
    pq.insert(40, 5);
    pq.insert(25, 2);
    auto HighestPriority= pq.extractHighestPriority();
    cout << "Highest priority element: " << HighestPriority.first<<" With value "<<HighestPriority.second << endl;
    pq.insert(50, 4);
    HighestPriority= pq.extractHighestPriority();
    cout << "Next highest priority element: " << HighestPriority.first<<" With priority "<<HighestPriority.second<< endl;
    cout << "\nHeap Sort Example:" << endl;

    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    cout << "Array before sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    heapSort(arr);

    cout << "Array after heap sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while (t--) {
        solve ();
    }
    return 0;
}