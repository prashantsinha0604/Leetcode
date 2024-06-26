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
    void solve ( TreeNode * root , int & sum , bool isLeft )
    {
        if( root == NULL )
        {
            return ;
        }

        if( isLeft and !root->left and !root -> right )
        {
            sum = sum + root -> val ;
        }
        if( root -> left )
        {
            solve( root -> left , sum , true );
        }

        if( root -> right )
        {
            solve( root -> right , sum , false );
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0 ;
        if( !root )
        {
            return 0 ;
        }
        solve ( root , sum ,false);
        return sum ;
    }
};