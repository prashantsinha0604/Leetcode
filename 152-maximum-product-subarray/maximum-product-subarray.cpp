class Solution {
public:
    int maxProduct(vector<int>& nums) {
        

        int prefix = 1, suffix = 1;
        
        int maxi_pro = INT_MIN;

        int n = nums.size();

        for(int i = 0; i < nums.size(); i++ )
        {
            if( prefix == 0 )
            {
                prefix = 1;
            }
            if( suffix == 0 )
            {
                suffix = 1;
            }
            prefix = prefix * nums[i];
            suffix = suffix * nums[n - i - 1];



            maxi_pro = max( maxi_pro, max( prefix, suffix ) );
        }

        return maxi_pro;
    }
};