## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
We use three pointers: `prev`, `curr`, and `next`. In each iteration, `next` temporarily caches `curr->next`, then `curr->next` is reversed to point to `prev`. All three pointers advance forward until the tail becomes the new head.

### Complexity
- **Time Complexity:** $O(N)$ single pass
- **Space Complexity:** $O(1)$ iterative constant memory

### Notes
Handles edge cases with 0 and 1 node gracefully without conditional branches.
