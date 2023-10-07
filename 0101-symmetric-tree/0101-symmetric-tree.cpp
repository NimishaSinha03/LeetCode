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
    bool isSame(TreeNode* a, TreeNode*b){
        if(a==NULL&&b==NULL)return true;
        if(a==NULL&&b!=NULL)return false;
        if(a!=NULL&&b==NULL)return false;
        else{
        if(a->val==b->val)
        if(isSame(a->right,b->left)&&isSame(a->left,b->right)){
            return true;}
  }
        return false;

    }
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left,root->right);
    }
};