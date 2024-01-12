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
/*
Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b
where v = |a.val - b.val| and a is an ancestor of b.

A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of b.
*/
class Solution {
public:
    int diff=0;
    void fun(TreeNode* root,int maxi,int mini)
    {
        if(root==NULL) return;
        diff=max(diff,max(abs(maxi-root->val),abs(mini-root->val)));
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        fun(root->left,maxi,mini);
        fun(root->right,maxi,mini);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        int mini=root->val,maxi=root->val;
        fun(root,mini,maxi);
        return diff;
        
    }
};
