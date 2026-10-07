#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void) {
    printf("=== Test Suite: Two Sum ===\n");
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int retSize1 = 0;
    int* res1 = twoSum(nums1, 4, 9, &retSize1);
    assert(retSize1 == 2);
    assert(res1[0] == 0 && res1[1] == 1);
    printf("Test Case 1 Passed: [2, 7, 11, 15], target=9 -> indices [%d, %d]\n", res1[0], res1[1]);
    free(res1);

    // Test Case 2: Edge case with negative numbers
    int nums2[] = {-3, 4, 3, 90};
    int retSize2 = 0;
    int* res2 = twoSum(nums2, 4, 0, &retSize2);
    assert(retSize2 == 2);
    assert(res2[0] == 0 && res2[1] == 2);
    printf("Test Case 2 Passed: [-3, 4, 3, 90], target=0 -> indices [%d, %d]\n", res2[0], res2[1]);
    free(res2);

    printf("All Two Sum tests passed successfully!\n\n");
    return 0;
}
