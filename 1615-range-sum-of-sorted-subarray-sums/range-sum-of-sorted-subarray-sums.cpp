class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans ;
        int sum = 0 ;
        int mod = 1e9 + 7 ;
        for( int i = 0 ; i < nums.size(); i++ )
        {
            sum = 0 ;
            for( int j = i ; j < nums.size(); j++)
            {
                sum = (sum + nums[j] ) % mod ; 
                ans.push_back( sum );
            }

        }

        sort( begin(ans) , end(ans) );
        sum = 0 ;

        for( int i = left - 1 ; i <= right - 1 ; i++ )
        {
            sum = ( sum + ans[i] ) % mod;
        }

        return sum ;
    }
};