class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dum = new ListNode(-1);
        ListNode* start = dum;
        ListNode* temp = l1;
        ListNode* temp2 = l2;
        int ca = 0;
        while (temp != NULL && temp2 != NULL) {
            int sum = temp->val + temp2->val + ca;
            ca = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            start->next = node;
            start = start->next;
            temp = temp->next;
            temp2 = temp2->next;
        }
        while (temp != NULL) {
            int sum1 = temp->val + ca;
            ca = sum1 / 10;
            ListNode* node = new ListNode(sum1 % 10);
            start->next = node;
            start = start->next;
            temp = temp->next;
        }
        while (temp2 != NULL) {
            int sum2 = temp2->val + ca;
            ca = sum2 / 10;
            ListNode* node = new ListNode(sum2 % 10);
            start->next = node;
            start = start->next;
            temp2 = temp2->next;
        }
        if (ca > 0) {
            start->next = new ListNode(ca);
        }
        return dum->next;
    }
};
