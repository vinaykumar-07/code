class Solution
{
public:
    bool solve1(TreeNode *root, int k)
    {
        if (root == NULL)
        {
            return true;
        }
        if (root->val < k)
        {
            if (solve1(root->left, k) && solve1(root->right, k))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
    bool solve2(TreeNode *root, int k)
    {
        if (root == NULL)
        {
            return true;
        }
        if (root->val > k)
        {
            if (solve2(root->left, k) && solve2(root->right, k))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        if (root->left && root->right)
        {
            if (solve1(root->left, root->val) && solve2(root->right, root->val))
            {
                return isValidBST(root->left) & isValidBST(root->right);
            }
            else
            {
                return false;
            }
        }
        if (root->left)
        {
            if (solve1(root->left, root->val))
            {
                return isValidBST(root->left);
            }
            else
                return false;
        }
        if (root->right)
        {
            if (solve2(root->right, root->val))
            {
                return isValidBST(root->right);
            }
            else
                return false;
        }
        return true;
    }
};