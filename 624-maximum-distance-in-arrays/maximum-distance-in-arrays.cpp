class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int small = arrays[0][0];
        int large = arrays[0].back();
        int ans = 0;

        for(int i = 1; i < arrays.size(); i++ )
        {
            ans = max( ans, abs( small - arrays[i][arrays[i].size() - 1]));
            ans = max( ans, abs( large - arrays[i][0] ) );

            small = min( small, arrays[i][0] );
            large = max( large, arrays[i][arrays[i].size() - 1] );
        }

        return ans;
    }
};