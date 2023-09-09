/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL||p==root||q==root)return root;
        TreeNode* lefta=lowestCommonAncestor(root->left,p,q);
        TreeNode* righta=lowestCommonAncestor(root->right,p,q);
        if(righta!=NULL&&lefta!=NULL)return root;
        else if(lefta!=NULL&&righta==NULL)return lefta;
        else if(righta!=NULL&&lefta==NULL)return righta;
        else return NULL;
    }
};