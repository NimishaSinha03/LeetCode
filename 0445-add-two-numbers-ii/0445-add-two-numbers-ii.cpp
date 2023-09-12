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
    ListNode* rev(ListNode* h) {
        ListNode* cur = h;
        ListNode* prev = NULL;
        while(cur) {
            ListNode* n = cur->next;
            cur->next = prev;
            prev = cur;
            cur = n;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* one, ListNode* two) {
        ListNode *l1=rev(one);
        ListNode *l2=rev(two);
        ListNode *temp=new ListNode(0);
        ListNode *dummy=temp;
        int carry=0;
        while((l1!=NULL||l2!=NULL)||carry){
            int sum=0;
            if(l1!=NULL)
            {sum+=l1->val;
            l1=l1->next;}
            if(l2!=NULL)
            {sum+=l2->val;
            l2=l2->next;}
            sum+=carry;
            carry=sum/10;
            ListNode* neww=new ListNode(sum%10);
            temp->next=neww;
            temp=temp->next;
        }
        return rev(dummy->next);
    }
    
};