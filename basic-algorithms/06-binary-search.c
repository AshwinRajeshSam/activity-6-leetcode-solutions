#include <stdio.h>
#include <assert.h>

int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    printf("=== Test Suite: Binary Search ===\n");
    // Test Case 1: Target exists
    int arr1[] = {-1, 0, 3, 5, 9, 12};
    assert(search(arr1, 6, 9) == 4);
    printf("Test Case 1 Passed: Target 9 found at index %d\n", search(arr1, 6, 9));

    // Test Case 2: Target does not exist
    assert(search(arr1, 6, 2) == -1);
    printf("Test Case 2 Passed: Target 2 correctly returned -1\n");

    // Test Case 3: Edge case single element found
    int arr2[] = {5};
    assert(search(arr2, 1, 5) == 0);
    printf("Test Case 3 Passed: Single element search confirmed\n");

    printf("All Binary Search tests passed successfully!\n\n");
    return 0;
}
