## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
We implement divide-and-conquer on the sorted array. Calculating `mid = low + (high - low) / 2` prevents integer overflow. Comparing the middle element with the target narrows the search boundary by half in each iteration.

### Complexity
- **Time Complexity:** $O(\log N)$
- **Space Complexity:** $O(1)$ iterative constant memory

### Notes
Guarded against `(low + high) / 2` integer overflow for large indices.
