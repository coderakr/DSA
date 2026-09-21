# HEAP
***
## STL for MinHeap
``` cpp
    priority_queue<int, vector<int>, greater<int>> pq;
```

## STL for MaxHeap
``` cpp
    priority_queue<int> pq;
```
- Header file: `<queue>`

- Note: By default, STL priority_queue is a MaxHeap. To create a MinHeap, we need to use `greater<int>` as the third template parameter.
- Time Complexity:
  - Insertion: O(log n)
  - Deletion: O(log n)
  - Access to top element: O(1)
- Space Complexity: O(n)
***
# How to Identify a Heap Problem
- Kth largest/smallest element in an array
- Min or Max of a stream of elements
- Merge K sorted arrays
- At any point, if you are asked to find the largest or smallest element in a collection of elements, think about using a heap.
