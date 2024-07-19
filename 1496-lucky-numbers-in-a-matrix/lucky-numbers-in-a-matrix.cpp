class Solution {
public:

    bool check( vector<vector<int> > matrix , int key , int i , int j )
    {
        bool flag_row = true ;
        bool flag_col = true ;
        for( int k = 0 ; k < matrix[0].size() ; k++ )
        {
            if( key > matrix[i][k] )
            {
                flag_row = false ;
                break ;
            }
        }

        for( int k = 0 ; k < matrix.size(); k++ )
        {
            if( key < matrix[k][j] )
            {
                flag_col = false;
                break;
            }
        }

        return (flag_row && flag_col) ;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans ;

        int m = matrix.size() - 1 ;
        int n = matrix[0].size() - 1 ;

        for( int i = 0 ; i <= m ; i++)
        {
            for( int j = 0 ; j <= n ;  j++ )
            {
                if( check( matrix , matrix[i][j] , i , j) )
                {
                    ans.push_back( matrix[i][j] );
                }
            }
        }

        return ans;
    }
};