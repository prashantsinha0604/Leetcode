class Solution {
public:
bool chk_prime( int n )
{

    if( n == 1 )
    {
        return false;
    }
    
    for( int i = 2  ; i * i  <= n ; i++ )
    {
        if( n % i == 0 )
        {
            return false ;
        }
    }
    return true ;
    
}
    int maximumPrimeDifference(vector<int>& nums) {
        vector < int > ans ;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if(chk_prime(nums[i]) == true )
            {
                ans.push_back( i ); 
            }
        }

        for(auto i : ans )
        {
            cout << i << endl;
        }
        int diff = 0 ;
        if( ans.size() == 1 )
        {
            return 0 ;
        }


        diff = abs( ans[0] - ans[ans.size() - 1] );

        return diff;
    }
};