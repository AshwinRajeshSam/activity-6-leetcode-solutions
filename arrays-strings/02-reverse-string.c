#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    printf("=== Test Suite: Reverse String ===\n");
    // Test Case 1: Typical string
    char str1[] = "hello";
    reverseString(str1, 5);
    assert(strcmp(str1, "olleh") == 0);
    printf("Test Case 1 Passed: 'hello' -> '%s'\n", str1);

    // Test Case 2: Edge case (single character)
    char str2[] = "A";
    reverseString(str2, 1);
    assert(strcmp(str2, "A") == 0);
    printf("Test Case 2 Passed: 'A' -> '%s'\n", str2);

    // Test Case 3: Edge case (palindrome / even length)
    char str3[] = "noon";
    reverseString(str3, 4);
    assert(strcmp(str3, "noon") == 0);
    printf("Test Case 3 Passed: 'noon' -> '%s'\n", str3);

    printf("All Reverse String tests passed successfully!\n\n");
    return 0;
}
