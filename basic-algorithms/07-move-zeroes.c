#include <stdio.h>
#include <assert.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}

int main(void) {
    printf("=== Test Suite: Move Zeroes ===\n");
    // Test Case 1: Mixed zeroes
    int arr1[] = {0, 1, 0, 3, 12};
    moveZeroes(arr1, 5);
    int expected1[] = {1, 3, 12, 0, 0};
    for (int i = 0; i < 5; i++) assert(arr1[i] == expected1[i]);
    printf("Test Case 1 Passed: [0,1,0,3,12] -> [1,3,12,0,0]\n");

    // Test Case 2: Edge case single zero
    int arr2[] = {0};
    moveZeroes(arr2, 1);
    assert(arr2[0] == 0);
    printf("Test Case 2 Passed: [0] -> [0]\n");

    // Test Case 3: Already sorted without zeroes
    int arr3[] = {1, 2, 3};
    moveZeroes(arr3, 3);
    assert(arr3[0] == 1 && arr3[1] == 2 && arr3[2] == 3);
    printf("Test Case 3 Passed: [1,2,3] -> [1,2,3]\n");

    printf("All Move Zeroes tests passed successfully!\n\n");
    return 0;
}
