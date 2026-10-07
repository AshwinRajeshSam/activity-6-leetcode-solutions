#include <stdio.h>
#include <assert.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main(void) {
    printf("=== Test Suite: Best Time to Buy and Sell Stock ===\n");
    // Test Case 1: Typical case
    int p1[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(p1, 6) == 5);
    printf("Test Case 1 Passed: [7,1,5,3,6,4] -> profit=5\n");

    // Test Case 2: Descending prices (no profit possible)
    int p2[] = {7, 6, 4, 3, 1};
    assert(maxProfit(p2, 5) == 0);
    printf("Test Case 2 Passed: [7,6,4,3,1] -> profit=0\n");

    // Test Case 3: Edge case single element
    int p3[] = {10};
    assert(maxProfit(p3, 1) == 0);
    printf("Test Case 3 Passed: [10] -> profit=0\n");

    printf("All Buy/Sell Stock tests passed successfully!\n\n");
    return 0;
}
