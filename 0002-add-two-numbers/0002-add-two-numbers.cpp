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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dumm=new ListNode(0);
        ListNode* t=dumm;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int cary=0;
        while(temp1!=NULL && temp2!=NULL){
            int sum=temp1->val+temp2->val+cary;
            cary=sum/10;
            dumm->next=new ListNode(sum%10);
            dumm=dumm->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            int sum=temp1->val+cary;
            cary=sum/10;
            dumm->next=new ListNode(sum%10);
            dumm=dumm->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            int sum=temp2->val+cary;
            cary=sum/10;
            dumm->next=new ListNode(sum%10);
            dumm=dumm->next;
            temp2=temp2->next;
        }
        if(cary!=0){
            dumm->next=new ListNode(cary);
        }
        return t->next;
    }
};