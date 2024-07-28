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
    void solve(TreeNode* a , vector<int> & temp1 )
    {
        if( a == nullptr )
        {
            return ;
        }

        solve( a -> left , temp1 );
        if( a -> left == NULL and a -> right == NULL )
        {
            temp1.push_back( a -> val );
        }

        solve( a -> right , temp1 );
    }    
    void getleaf(TreeNode* b , vector<int> & temp2 )
    {
        if( b == nullptr )
        {
            return ;
        }

        solve( b-> left , temp2 );
        if( b-> left == NULL and b -> right == NULL )
        {
            temp2.push_back( b -> val );
        }

        solve( b -> right , temp2 );
    }    


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1 , temp2 ;

        solve( root1 , temp1 );
        getleaf( root2 , temp2 );

        if( temp1.size() != temp2.size() )
        {
            return false ;
        }

        for( int i = 0 ; i < temp1.size() ; i++ )
        {
            if( temp1[i] != temp2[i] )
            {
                return false ;
            }
        }
        return true ;
    }
};