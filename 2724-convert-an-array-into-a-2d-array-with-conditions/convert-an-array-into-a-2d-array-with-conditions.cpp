class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map < int , int > mp ;

        for( auto i : nums )
        {
            mp[i]++;
        }

        int size = nums.size() ;
        while( size-- )
        {
            vector<int> temp ;
            for( int i = 0 ; i < nums.size() ; i++ )
            {
                if( mp[nums[i]] != 0 )
                {
                    if( find( temp.begin() , temp.end() , nums[i]) == temp.end() )
                        {
                            temp.push_back( nums[i] );
                            mp[nums[i]]--;
                        }

                }
            }

            if( temp.size() > 0 )
            {
                ans.push_back( temp );

            }

        }
        return ans;

    }
};