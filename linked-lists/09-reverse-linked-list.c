#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Helper to create list node
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

int main(void) {
    printf("=== Test Suite: Reverse Linked List ===\n");
    // Test Case 1: [1, 2, 3] -> [3, 2, 1]
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    struct ListNode* rev = reverseList(head);
    assert(rev->val == 3);
    assert(rev->next->val == 2);
    assert(rev->next->next->val == 1);
    assert(rev->next->next->next == NULL);
    printf("Test Case 1 Passed: [1,2,3] reversed to [3,2,1]\n");

    // Clean up
    while (rev) {
        struct ListNode* temp = rev;
        rev = rev->next;
        free(temp);
    }

    // Test Case 2: Edge case empty list
    assert(reverseList(NULL) == NULL);
    printf("Test Case 2 Passed: Empty list NULL safely returns NULL\n");

    printf("All Reverse Linked List tests passed successfully!\n\n");
    return 0;
}
