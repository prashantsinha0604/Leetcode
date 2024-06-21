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
    bool isSame ( TreeNode * p , TreeNode * q )
    {
       if( p == nullptr and q == nullptr )
       {
        return true ;
       }
       if( p != NULL and q == NULL or p == NULL and q != nullptr )
       {
        return false ;
       }
       if( p -> val == q -> val )
       {
        return isSame( p -> left , q -> right) and isSame( p -> right , q-> left) ;
       }

       return false ;
    }
    bool isSymmetric(TreeNode* root) {
        if( root == NULL )
        {
            return true ;
        }
        return isSame( root-> left  , root -> right );
    }
};