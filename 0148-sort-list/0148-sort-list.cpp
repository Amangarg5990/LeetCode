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
    ListNode* getMiddle(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        while(l1!=NULL){
            tail->next=l1;
            l1=l1->next;
            tail=tail->next;
        }
        while(l2!=NULL){
            tail->next=l2;
            l2=l2->next;
            tail=tail->next;
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
       ListNode* mid=getMiddle(head);
       ListNode* left=head;
       ListNode* right=mid->next;
       mid->next=NULL;
       ListNode* sorted_left=sortList(left);
       ListNode* sorted_right=sortList(right);
       return merge(sorted_left, sorted_right);
    }

};