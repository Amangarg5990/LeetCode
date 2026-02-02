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
    ListNode* partition(ListNode* head, int x) {
        ListNode* sm =new ListNode(-1);
        ListNode* b =new ListNode(-1);
        ListNode* sma=sm;
        ListNode* bi=b;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                ListNode* temp2=new ListNode(temp->val);
                sma->next=temp2;
                sma=sma->next;
            }
            else{
                ListNode* temp5=new ListNode(temp->val);
                bi->next=temp5;
                bi=bi->next;

            }
            temp=temp->next;
        }
        sma->next=b->next;
        return sm->next;

    }
};