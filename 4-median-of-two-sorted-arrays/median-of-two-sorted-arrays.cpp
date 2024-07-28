class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0  , j = 0 , k = 0  ;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans( m+n );

        while( i < m and j < n )
        {
            if( nums1[i] > nums2[j] )
            {
                ans[k++] = nums2[j++];
            }
            else if( nums1[i] < nums2[j] )
            {
                ans[k++] = nums1[i++];
            }
            else if( nums1[i] == nums2[j] )
            {
                ans[k++] = nums1[i++];
                ans[k++] = nums2[j++];
            }
        }

        while( i < m )
        {
            ans[k++] = nums1[i++];
        }
        while( j < n )
        {
            ans[k++] = nums2[j++];
        }
        for( auto i : ans )
        {
            cout << i << " "; 
        }
        double median = 0 ;
        n = ans.size();

        cout<< n ;
        if( n % 2 == 1 )
        {
            median = ans[n/2];
        }
        else
        {
            median = ans[ans.size() / 2] + ans[(ans.size() / 2) - 1 ];
            median = median / 2;
        }

        // cout<< ans[ ans.size() / 2 - 1 ];
        return median ;
    }
};