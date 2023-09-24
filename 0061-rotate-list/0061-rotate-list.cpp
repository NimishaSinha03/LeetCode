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
    ListNode* rotateRight(ListNode* head, int k) {
         if (!head || k == 0) {
            return head;
        }
        ListNode* c=head;
       
        ListNode* ans=NULL;
        int count=1;
        while(c->next){
            count++;
            c=c->next;
        }
       k = k % count;
        if(k==0)return head;
        c->next=head;
        c=head;
        for(int i=0;i<count-k-1;i++)c=c->next;
        ans=c->next;
        c->next=NULL;
        return ans;
    }
};