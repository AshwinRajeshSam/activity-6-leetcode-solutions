## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
We use a two-pointer write-head approach. The `insertPos` pointer tracks where the next non-zero value belongs. A single pass writes all non-zero elements forward, and a trailing pass fills the remaining positions with zeroes.

### Complexity
- **Time Complexity:** $O(N)$ linear time
- **Space Complexity:** $O(1)$ in-place modification

### Notes
Maintains the relative ordering of non-zero elements without auxiliary arrays.
