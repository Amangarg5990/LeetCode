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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dum=new ListNode(0);
        dum->next=head;
        ListNode* cur=head;
        ListNode* prev=dum;
        while(cur!=NULL){
            if(cur->next!=NULL && cur->val==cur->next->val){
                while(cur->next!=NULL && cur->val==cur->next->val){
                    cur=cur->next;
                }
                prev->next=cur->next;
            }
            else{
            prev=prev->next;
            }
            cur=cur->next;
        }
        return dum->next;
    }
};