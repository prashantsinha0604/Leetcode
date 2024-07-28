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
    bool isEvenOddTree(TreeNode* root) {
        
        queue< TreeNode* > q;
        q.push( root );
        bool level = true; //even for true

        while( !q.empty() )
        {
            int size = q.size();
            vector< int > temp;

            int prev = INT_MAX;

            if( level )
            {
                prev = INT_MIN;
            }
            while( size-- )
            {
                TreeNode* frontNode = q.front();
                q.pop();

                if( level and (frontNode -> val % 2 == 0 or frontNode -> val <= prev) ) return false;

                if( !level and (frontNode -> val % 2 == 1 or frontNode -> val >= prev) ) return false;

                if( frontNode -> left )
                {
                    q.push( frontNode -> left );
                }

                if( frontNode -> right )
                {
                    q.push( frontNode -> right );
                }

                prev = frontNode -> val;
            }
            level = !level; 
        }

        return true;
    }
};