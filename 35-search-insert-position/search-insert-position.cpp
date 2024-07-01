class Solution {
public:
    
    int solve( vector<int> nums , int low , int high , int k , int & ans )
    {
        if( low > high )
        {
            return ans ;
        }
        int mid = low + ( high - low )/2;

        if( nums[mid] >= k )
        {
            ans = mid ; 
            high = mid - 1 ;
            return solve( nums , low , high , k , ans );
        }
        else 
        {
            low = mid + 1 ; 
            return solve( nums , low , high , k , ans );
        }
    }


    int searchInsert(vector<int>& nums, int target) {
        int low , high , mid , ans ;
        ans = nums.size() , low = 0 , high = nums.size() - 1;

        return solve( nums , low , high , target , ans );
    }
};