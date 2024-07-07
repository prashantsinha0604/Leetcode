class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0 ;
        int maxi = 0 ;

        int i = 0 ;
        while( i < nums.size()  )
        {
            if( nums[i] == 1 )
            {
                cnt++;
            }
            else if ( nums[i] == 0 )
            {
                cnt = 0 ;
            }
           
            if( cnt > maxi )
            {
                maxi = cnt ;
            }
            i++;
        }

        return maxi;
    }
};