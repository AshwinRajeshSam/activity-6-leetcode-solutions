## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
We use horizontal scanning. Taking the first string as initial prefix candidate, we compare it against each subsequent string, truncating the prefix as soon as a character mismatch occurs.

### Complexity
- **Time Complexity:** $O(S)$ where $S$ is the sum of characters across all strings
- **Space Complexity:** $O(1)$ auxiliary space beyond return buffer

### Notes
Early termination when prefix becomes empty string saves unnecessary iterations.
