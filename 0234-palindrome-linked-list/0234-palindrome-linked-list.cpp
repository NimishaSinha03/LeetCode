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
    ListNode *rev(ListNode *head){
        ListNode *temp=NULL;
        ListNode *curr=head;
        ListNode *prev=NULL;
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return (head);
        }
        ListNode *tem=head,*slow=head,*fast=head;
        while(fast){
            fast=fast->next;
            slow=slow->next;
            if(fast)fast=fast->next;
        }
        slow=rev(slow);
        while(slow){
            if(tem->val!=slow->val)return false;
            tem=tem->next;
            slow=slow->next;
        }
        return true;
      // ListNode *pal=rev(head);
      //   while(pal&&head){
      //       if(pal->val!=head->val)return false;
      //       head=head->next;
      //       pal=pal->next;
      //   }
      //   return true;
    }
};