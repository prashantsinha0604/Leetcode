class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map< int, int > mp;


        int sum = 0;
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++ )
        {
            sum += nums[i];

            int diff = sum - k;

            if( mp.find( diff ) != mp.end() )
            {
                cnt += mp[diff];
            }

            if( sum == k )
            {
                cnt++;
            }

            mp[sum]++;
        }

        return cnt;
    }
};