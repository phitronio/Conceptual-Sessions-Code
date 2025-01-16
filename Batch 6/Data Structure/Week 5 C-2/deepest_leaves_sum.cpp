class Solution
{
public:
    int max_height(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        int left = max_height(root->left);
        int right = max_height(root->right);

        return max(left, right) + 1;
    }

    int deepestLeavesSum(TreeNode *root)
    {

        int mx_level = max_height(root);

        int sum = 0;

        queue<pair<TreeNode *, int>> q;

        q.push({root, 1});

        while (!q.empty())
        {
            // node ta k queue theke pick kora
            pair<TreeNode *, int> parent_pair = q.front();
            q.pop();

            TreeNode *parent_node = parent_pair.first;
            int parent_node_level = parent_pair.second;

            // node ta niye kaj kora
            if (parent_node_level == mx_level)
            {
                sum += parent_node->val;
            }

            // children

            if (parent_node->left)
            {
                q.push({parent_node->left, parent_node_level + 1});
            }

            if (parent_node->right)
            {
                q.push({parent_node->right, parent_node_level + 1});
            }
        }
        return sum;
    }
};