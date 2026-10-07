#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) return false;
    char* stack = (char*)malloc(len);
    int top = -1;
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false;
            }
        }
    }
    bool valid = (top == -1);
    free(stack);
    return valid;
}

int main(void) {
    printf("=== Test Suite: Valid Parentheses ===\n");
    // Test Case 1: Simple valid
    assert(isValid("()") == true);
    printf("Test Case 1 Passed: '()' is true\n");

    // Test Case 2: Multi-bracket valid
    assert(isValid("()[]{}") == true);
    printf("Test Case 2 Passed: '()[]{}' is true\n");

    // Test Case 3: Mismatched brackets
    assert(isValid("(]") == false);
    printf("Test Case 3 Passed: '(]' is false\n");

    // Test Case 4: Edge case odd length
    assert(isValid("(") == false);
    printf("Test Case 4 Passed: '(' is false\n");

    printf("All Valid Parentheses tests passed successfully!\n\n");
    return 0;
}
