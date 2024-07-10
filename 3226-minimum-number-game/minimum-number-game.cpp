class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        sort( begin( nums) , nums.end() );
        vector<int> ans(n);
        int idx = 1;
        for( int i = 0 ; i < nums.size(); i += 2)
        {
            ans[idx] = nums[i];
            idx+=2;
        }

        idx = 0;
        for(int i = 1; i < n; i+=2 )
        {
            ans[idx] = nums[i];
            idx += 2;
        }
        

        return ans;


    }
};