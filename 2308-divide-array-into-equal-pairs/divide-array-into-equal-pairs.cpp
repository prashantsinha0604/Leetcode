class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int , int > mp;

        for( auto i : nums )
        {
            mp[i]++;
        }
        bool ans = true ;
        for( int i = 0 ; i < nums.size(); i++ )
        {
                // cout << " count of " << nums[i] <<"is " << mp[nums[i]] << endl;
            if( mp[nums[i]]  % 2 != 0 )
            {
                ans = false ;
            }
        }

        return ans ;
    }
};