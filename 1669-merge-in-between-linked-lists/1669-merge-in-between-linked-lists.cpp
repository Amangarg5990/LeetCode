/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prevA = list1;
        for (int i = 1; i < a; i++) {
            prevA = prevA->next;
        }
        ListNode* afterB = prevA;
        for (int i = a; i <= b; i++) {
            afterB = afterB->next;
        }
        afterB = afterB->next;

        prevA->next = list2;

        ListNode* tail = list2;
        while (tail->next != NULL) {
            tail = tail->next;
        }

        tail->next = afterB;

        return list1;
    }
};