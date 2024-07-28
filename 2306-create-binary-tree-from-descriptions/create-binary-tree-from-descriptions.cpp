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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        unordered_map< int, TreeNode* > mp;
        unordered_map< int, bool > par;

        for( auto i: descriptions )
        {
            int parent = i[0], child = i[1];
            int isLeft = i[2];

            TreeNode* parentNode = nullptr, *childNode = nullptr;

            if( mp.find( parent ) == mp.end() )
            {
                parentNode = new TreeNode( parent );
            }
            else
            {
                parentNode = mp[parent];
            }

            if( mp.find( child ) == mp.end() )
            {
                childNode = new TreeNode( child );
            }
            else
            {
                childNode = mp[child];
            }

            if( isLeft )
            {
                parentNode -> left = childNode;
            }
            else
            {
                parentNode -> right = childNode;
            }

            par[child] = true;
            mp[child] = childNode;
            mp[parent] = parentNode;
        }

        TreeNode* rootNode = nullptr;

        for( auto [nodeVal, node] : mp )
        {
            if( par.find( nodeVal ) == par.end() )
            {
                rootNode = node;
            }
        }
        
        return rootNode;
    }
};