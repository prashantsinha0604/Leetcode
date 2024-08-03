class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // sort( nums.begin() , nums.end() );

        int cnt_pairs = 0 ; 
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            for( int j = 0 ; j < nums.size(); j++ )
            {
                if( nums[i] == nums[j] and i < j )
                {
                    cnt_pairs++;
                }
            }
        }

        return cnt_pairs;
    }
};