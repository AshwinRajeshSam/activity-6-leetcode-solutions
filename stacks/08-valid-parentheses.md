## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
We use an array-based LIFO stack. Opening brackets are pushed onto the stack. Upon encountering a closing bracket, we check if the stack is non-empty and whether the popped opening bracket matches. At termination, the stack must be empty.

### Complexity
- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(N)$ worst-case stack allocation

### Notes
Fast-path rejection for odd length strings avoids unnecessary traversal.
