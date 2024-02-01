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
    bool solve(TreeNode *root, long long int min, long long int max){
        if(root==NULL)return true;
        if(root->val>min&&root->val<max){
        bool l=solve(root->left,min,root->val);
        bool r=solve(root->right,root->val,max);
        return l&&r;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        long long int min = -1000000000000, max = 1000000000000;
        return solve(root,min,max);
    }
};