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
void sum( TreeNode * root , int &ans )
{
    // int sum = 0 ;
    queue<TreeNode * > q ;
    q.push( root );

    while( !q.empty() )
    {
        TreeNode * temp = q.front(); 
        q.pop();

        if( temp -> left )
        {
            q.push( temp -> left );
        }

        if( temp -> right )
        {
            q.push(temp -> right );
        }

        if( temp -> left )
        {
            if( temp -> left -> left == NULL and temp -> left -> right == NULL )
            {
                ans = ans + temp -> left -> val ;
            }
        }
    }
}
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0 ;
        if( root == NULL )
        {
            return 0 ;
        }
        sum(root , ans );
        return ans;
    }
};