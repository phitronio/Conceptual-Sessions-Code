// Problem link: https://leetcode.com/problems/deepest-leaves-sum/

class Solution {
public:
    int height(TreeNode* root)
    {
        if(root == NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        return max(l,r)+1;
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        int h = height(root);

        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while (!q.empty())
        {
            pair<TreeNode*, int> pr = q.front();
            TreeNode* node = pr.first;
            int level = pr.second;
            q.pop();

            if (level == h)
                ans += node->val;
            
            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }
        return ans;
    }
};