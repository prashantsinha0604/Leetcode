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


    bool dfs( TreeNode* root, int targetSum, int currSum )
    {
        if( root == nullptr )
        {
            return false;
        }

        currSum += root -> val;

        if( root -> left == nullptr and root -> right == nullptr )
        {
            return currSum == targetSum;
        }

        return dfs( root -> left, targetSum, currSum ) or dfs( root -> right, targetSum, currSum );

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if( root == nullptr )
        {
            return false;
        }

        return dfs( root, targetSum, 0 );
    }
};