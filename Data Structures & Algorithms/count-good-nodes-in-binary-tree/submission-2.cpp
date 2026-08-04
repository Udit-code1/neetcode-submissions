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
    int f(TreeNode* root,int mx){
        if(root == NULL)
            return NULL;
        int c=0;
        if(root->val >= mx){
            mx=root->val;
            c=1;
        }
        return c+(f(root->left,mx)+f(root->right,mx));
    }
    int goodNodes(TreeNode* root) {
        int mx=INT_MIN;
        return f(root,mx);
    }
};
