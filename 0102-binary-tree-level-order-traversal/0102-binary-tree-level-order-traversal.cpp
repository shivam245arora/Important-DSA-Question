class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> temp;
            int size = q.size();

            for (int i = 1; i <= size; i++) {
                TreeNode* a = q.front();
                q.pop();
                temp.push_back(a->val);
                if (a->left != nullptr)
                    q.push(a->left);
                if (a->right != nullptr)
                    q.push(a->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};