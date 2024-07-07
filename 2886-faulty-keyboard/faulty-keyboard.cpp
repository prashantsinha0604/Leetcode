class Solution {
public:
    string finalString(string s) {
        string ans = "";

        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( s[i] == 'i' )
            {
                int n = ans.length() - 1 ;
               int i = 0;
               while( i <= n )
               {
                swap( ans[i++] , ans[n--] );
               }
            }
            else
            {
                ans = ans + s[i];
            }
        }

        return ans ;
    }
};