class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* start=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while(second != NULL){
            ListNode* front = second->next;
            second->next = prev;
            prev = second;
            second = front;
        }
        while(start != NULL && prev != NULL){
            ListNode* next1 = start->next;
            ListNode* next2 = prev->next;
            start->next = prev;
            prev->next = next1;
            start = next1;
            prev = next2;
        }
    }
};