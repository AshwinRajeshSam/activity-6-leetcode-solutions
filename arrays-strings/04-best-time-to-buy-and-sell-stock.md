## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
We apply a one-pass greedy / dynamic programming approach tracking the minimum price encountered so far. At each step, we calculate potential profit by selling at current price and update global maximum profit.

### Complexity
- **Time Complexity:** $O(N)$ single pass
- **Space Complexity:** $O(1)$ constant auxiliary space

### Notes
Avoided $O(N^2)$ brute force checking all pairs.
