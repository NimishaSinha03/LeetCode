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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* one=head;
        ListNode* two=head->next;
        while(two!=NULL){
            int insert=__gcd(one->val,two->val);
            ListNode* neww=new ListNode(insert);
            one->next=neww;
            neww->next=two;
            one=one->next->next;
            two=two->next;
        }
        return head;
    }
};