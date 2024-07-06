class Solution {
public:
    void solve( vector<int> nums , vector<int> output , int idx , vector<vector<int>> & v)
    {
        //base case 
        if( idx >= nums.size() )
        {
            v.push_back( output );
            return ;
        }

        //exclude call 
        solve( nums , output , idx + 1 , v );

        //include call 
        int element = nums[idx];
        output.push_back( element );
        solve( nums , output , idx + 1 , v );


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > v ;

        vector<int> output ;
        int idx = 0 ;
        solve( nums , output , idx , v );
        return v ;
    }
};