/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode *slow=head, *fast=head;
        while(fast){
            fast=fast->next;
            slow=slow->next;
            if(fast)fast=fast->next;
            // same as detecting cycle, ab set fast to head, and move slow and fast ointers by 1(same pace), and return fast/slow
            if(slow==fast){fast=head;
            while(fast!=slow){
                fast=fast->next;
                slow=slow->next;
            }
            return slow;
        }}
        return NULL;
    }
};