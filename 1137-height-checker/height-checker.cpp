class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector < int > exp;
        int cnt = 0 ;
        for( auto i : heights )
        {
            exp.push_back ( i );
        }
        sort( begin(exp) , exp.end() );
        for( int i = 0 ; i < exp.size() ; i++ )
        {
            if( exp[i] != heights[i] )
            {
                cnt++;
            }
        }
        return cnt ;
    }
};