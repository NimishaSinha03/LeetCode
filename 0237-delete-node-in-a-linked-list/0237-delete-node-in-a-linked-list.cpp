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
    void deleteNode(ListNode* node) {
//         copy the alure of the node ;
        node->val=node->next->val;
        // ab hame node->next->val ko delete karna hai
        node->next=node->next->next;
    }
};