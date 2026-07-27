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
    TreeNode* f(TreeNode* root,TreeNode* p, TreeNode* q){
        if(root==NULL)
            return NULL;
        if(root==p || root==q)
            return root;
        if ((root->val > p->val && root->val < q->val) ||
             (root->val < p->val && root->val > q->val))
            return root;
        if(root->val > p->val && root->val > q->val)
            return f(root->left,p,q);
        else
            return f(root->right,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return f(root,p,q);
    }
};
