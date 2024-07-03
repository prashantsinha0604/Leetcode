class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        int ans = 0 , n = points.size() ;
        sort( points.begin() , points.end() );

        for( int i = 0 ; i < n ; )
        {
            int curx = points[i][0];
            int maxx = curx + w ;
            ans++;
            while( i < n and points[i][0] <= maxx )
            {
                i++;
            }
        }
        return ans;
        
       
    }
};