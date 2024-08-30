class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0 , high = nums.size();
        int n = nums.size();
        int positive = 0 , negatives = 0 ;

        while( low < high )
        {
            int mid = low + ( high - low ) / 2 ;

            if( nums[mid] > 0 )
            {
                high = mid ;
            }
            else
            {
                low = mid + 1 ;
            }
        }

        positive = n - high ;
        low = 0 , high = n ;

        while( low < high )
        {
            int mid = low + ( high - low )/ 2 ;

            if( nums[mid] < 0 )
            {
                low = mid + 1 ;
            }
            else
            {
                high = mid ;
            }
        }

        
        negatives = low   ;
        cout << negatives << " " << positive << endl ;

        return max( positive , negatives );
    }
};