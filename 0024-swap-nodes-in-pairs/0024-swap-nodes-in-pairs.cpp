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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dumy1=new ListNode(-1);
        ListNode* dummy1=dumy1;
        ListNode* dumy2=new ListNode(-1);
        ListNode* dummy2=dumy2;
        ListNode* temp=head;
        bool flag=true;
        while(temp!=NULL){
            if(flag==true){
                dummy1->next=temp;
                dummy1=dummy1->next;
                flag=false;
            }
            else{
                dummy2->next=temp;
                dummy2=dummy2->next;
                flag=true;
            }
            temp=temp->next;
        }
        dummy1->next=NULL;
        dummy2->next=NULL;
        ListNode* even=dumy2->next;
        ListNode* odd=dumy1->next;
        ListNode* dumy3=new ListNode(-1);
        ListNode* ans=dumy3;
        while(even!=NULL && odd!=NULL){
            ans->next=even;
            even=even->next;
            ans=ans->next;
            ans->next=odd;
            odd=odd->next;
            ans=ans->next;
        }
        while(even!=NULL){
            ans->next=even;
        }
        while(odd!=NULL){
            ans->next=odd;
        }
        return dumy3->next;
    }
};