/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        // ye toh clear h ki pred ko right se connect krna h, so pehele pred nikaal kr, right se connect kiya, fir jo already right m tha usko curr (root) se detach kiya, as curr aur right ke beech m pred aayega, so dtach kene ke liye line no. 23, then ab left ko null karege as to make it a ll.
        
        TreeNode * curr=root;
        while(curr){
            if(curr->left){
                TreeNode * pred=curr->left;
                while(pred->right)pred=pred->right;
                pred->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
        
        
        
        
        
        
        
        
        
    }
};
// morris traversal