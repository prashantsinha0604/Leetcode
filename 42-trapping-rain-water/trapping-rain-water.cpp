class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();

        vector< int > left(n), right(n);
        left[0] = h[0];
        right[n - 1] = h[n - 1];

        for(int i = 1; i < n; i++ )
        {
            if( h[i] > left[ i - 1] )
            {
                left[i] = h[i];
            }
            else
            {
                left[i] = left[i - 1];
            }
        }


        for(int i = n - 2; i > -1; i-- )
        {
            if( h[i] > right[i + 1] )
            {
                right[i] = h[i];
            }
            else
            {
                right[i] = right[i + 1];
            }
        }

        int ans = 0;

        for(int i = 1; i < n - 1; i++ )
        {
            if( left[i - 1] > h[i] and right[i + 1] > h[i] )
            {
                ans = ans + min( left[i - 1] - h[i], right[i + 1] - h[i] );
            }
        }

        return ans;
    }
};