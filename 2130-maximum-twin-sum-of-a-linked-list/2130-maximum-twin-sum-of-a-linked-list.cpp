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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* left=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        while(right!=NULL){
            ListNode* front=right->next;
            right->next=prev;
            prev=right;
            right=front;
        }
        ListNode* end=prev;
        int ma=0;
        while(left!=NULL && end!=NULL){
            int sum=left->val+end->val;
            ma=max(sum,ma);
            left=left->next;
            end=end->next;
        }
        return ma;

    }
};