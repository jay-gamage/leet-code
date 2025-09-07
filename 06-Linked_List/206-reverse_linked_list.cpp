/* ----------------------------------------------------
   206. Reverse Linked List (23/08/25); JDG - C++ Solution
   Time complexity : O(n)
   Space complexity: O(1)
   ---------------------------------------------------- */

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while(curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

void printList(ListNode* head) {
    while(head != nullptr) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr\n";
}

ListNode* newNode(int val) {
    ListNode* node = new ListNode;
    node->val = val;
    node->next = nullptr;
    return node;
}

void freeList(ListNode* head) {
    ListNode* temp = nullptr;
    while(head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Solution solution;

    ListNode* head = newNode(1);
    ListNode* curr = head;

    for(int i=2; i<6; i++) {
        curr->next = newNode(i);
        curr = curr->next;
    }

    printList(head);
    head = solution.reverseList(head);
    printList(head);
    freeList(head);

    return 0;
}
