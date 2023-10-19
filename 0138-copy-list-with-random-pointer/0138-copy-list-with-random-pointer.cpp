/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        
        unordered_map<Node*, Node*> ans;
        Node * curr = head;
        while(curr){
            ans[curr]=new Node(curr->val);
            curr=curr->next;
        }
        
        // abhi bas node banane ka kaam kiya hai
        curr = head;
        // abhi curr reset kiya hai
        while(curr){
            ans[curr]->next=ans[curr->next];
            ans[curr]->random=ans[curr->random];
            curr=curr->next;
        }
        return ans[head];
       
    }
};