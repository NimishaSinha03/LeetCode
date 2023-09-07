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
    int solve (TreeNode *root,int &data){
        if(root==NULL)return 0;
        int l,r;
        l=solve(root->left,data);
        r=solve(root->right,data);
        data=max(data,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int data=0;
        solve(root,data);
        return data;
    }
};