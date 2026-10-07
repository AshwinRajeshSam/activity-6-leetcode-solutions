#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main(void) {
    printf("=== Test Suite: Valid Anagram ===\n");
    // Test Case 1: Typical anagram
    assert(isAnagram("anagram", "nagaram") == true);
    printf("Test Case 1 Passed: 'anagram' and 'nagaram' is true\n");

    // Test Case 2: Not an anagram
    assert(isAnagram("rat", "car") == false);
    printf("Test Case 2 Passed: 'rat' and 'car' is false\n");

    // Test Case 3: Edge case different lengths
    assert(isAnagram("a", "ab") == false);
    printf("Test Case 3 Passed: 'a' and 'ab' is false\n");

    printf("All Valid Anagram tests passed successfully!\n\n");
    return 0;
}
