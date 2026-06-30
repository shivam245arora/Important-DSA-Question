/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool rec(TreeNode* root, int currsum, int targetsum){
        if(root == nullptr) return false;
        if(root->left == nullptr && root->right == nullptr){
            return (currsum+root->val) == targetsum;
        }
        bool la = rec(root->left, currsum+root->val,targetsum);
        bool ra = rec(root->right, currsum+root->val,targetsum);
        return la || ra;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return rec(root,0,targetSum);
    }
};