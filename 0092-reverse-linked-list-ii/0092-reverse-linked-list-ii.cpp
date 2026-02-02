class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || head->next == NULL || left == right)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* op = dummy;
        for (int i = 1; i < left; i++) {
            op = op->next;
        }
        ListNode* afterA = op->next;
        ListNode* afterB = afterA;
        for (int i = left; i < right; i++) {
            afterB = afterB->next;
        }
        ListNode* temp7 = afterB->next;
        afterB->next = NULL;
        ListNode* prev = NULL;
        ListNode* curr = afterA;
        while (curr != NULL) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        op->next = prev;
        afterA->next = temp7;
        return dummy->next;
    }
};
