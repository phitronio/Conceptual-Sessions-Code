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
    int mx_dep;
    int sum = 0;
    // max depth or height
    int max_height(TreeNode* root) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 0;
        int l = max_height(root->left);
        int r = max_height(root->right);

        return max(l, r) + 1;
    }
    void level_order(TreeNode* root) {
        if (root == NULL) {
            // cout << "No Tree";
            return;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            // 1.  ber kore ana
            pair<TreeNode*, int> f = q.front();
            q.pop();

            TreeNode* node = f.first;
            int level = f.second;

            // 2.  oi node ke niye kaj
            // cout << f->val << " ";
            if (level == mx_dep) {
                sum += node->val;
            }

            // 3.  children push kora
            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        mx_dep = max_height(root);
        level_order(root);
        return sum;
    }
};
