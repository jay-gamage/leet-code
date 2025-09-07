/* ----------------------------------------------------
   206. Reverse Linked List (23/08/25); JDG - C Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

/*
struct ListNode {
    int val;
    struct ListNode* next;
};
*/

/* Use typedef in struct for cleaner code. */
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printList(ListNode* head) {
    while(head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

ListNode* newNode(int val) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void freeList(ListNode* head){
    ListNode* temp = NULL;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(){
    ListNode* head = newNode(1);
    ListNode* curr = head;
    for(int i=2; i<=5; i++){
        curr->next = newNode(i);
        curr = curr->next;
    }

    printList(head);
    head = reverseList(head);
    printList(head);

    /* Free allocated memory. */
    freeList(head);

    return 0;
}
