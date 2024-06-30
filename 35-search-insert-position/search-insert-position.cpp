class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low , high , mid , ans ;
        ans = nums.size() , low = 0 , high = nums.size() - 1;

        /* it is a lower bound which is smaller in an array 
           such that arr[mid] >= target */
        while( low <= high )
        {
            mid = low + ( high - low )/2;
            if( nums[mid] >= target )
            {
                ans = mid ;
                high = mid - 1 ;
            }
            else 
            {
                low = mid + 1  ;
            }
        }

        return ans ;
    }
};