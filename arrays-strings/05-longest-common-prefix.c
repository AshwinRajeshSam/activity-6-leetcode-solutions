#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }
    char* prefix = strdup(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
        if (prefix[0] == '\0') break;
    }
    return prefix;
}

int main(void) {
    printf("=== Test Suite: Longest Common Prefix ===\n");
    // Test Case 1: Typical common prefix
    char* words1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(words1, 3);
    assert(strcmp(res1, "fl") == 0);
    printf("Test Case 1 Passed: ['flower','flow','flight'] -> '%s'\n", res1);
    free(res1);

    // Test Case 2: No common prefix
    char* words2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(words2, 3);
    assert(strcmp(res2, "") == 0);
    printf("Test Case 2 Passed: ['dog','racecar','car'] -> '%s'\n", res2);
    free(res2);

    printf("All Longest Common Prefix tests passed successfully!\n\n");
    return 0;
}
