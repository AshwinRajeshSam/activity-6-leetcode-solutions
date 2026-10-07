## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
We use the classic two-pointer technique with `left` initialized at index 0 and `right` at `sSize - 1`. Pointers move inward swapping characters until they meet or cross, performing the reversal strictly in-place.

### Complexity
- **Time Complexity:** $O(N)$ where $N$ is the length of string
- **Space Complexity:** $O(1)$ in-place auxiliary space

### Notes
Understands true in-place mutation without allocating intermediate string buffers, preserving memory cache locality.
