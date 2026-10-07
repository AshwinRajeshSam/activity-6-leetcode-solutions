## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
We iterate through all possible pairs in the array to identify the pair of indices whose values sum to the target value. While a hash map provides $O(N)$ lookup in languages with built-in hash tables, this direct C implementation avoids auxiliary table allocation overhead while maintaining guaranteed correctness across all edge cases.

### Complexity
- **Time Complexity:** $O(N^2)$ (or $O(N)$ with hash table)
- **Space Complexity:** $O(1)$ auxiliary space ($O(N)$ output allocated)

### Notes
Learned how LeetCode expects return pointers to be heap-allocated with caller responsibility for freeing. Tested negative integer handling and duplicate elements.
