class Solution {
public:
    pair<int, int> findMax(vector<int>& grid) {
        int idx = -1;
        int maxi = INT_MIN;

        for (int j = 0; j < grid.size(); j++) {
            if (maxi < grid[j]) {
                maxi = grid[j];
                idx = j;
            }
        }
        return {maxi, idx};
    }
    int deleteGreatestValue(vector<vector<int>>& grid) {

        int maxSum = 0;
        int size = grid[0].size();
        while (size--) 
        {
            int tempMax = INT_MIN;

            for (int i = 0; i < grid.size(); i++) 
            {
                pair<int, int> p = findMax(grid[i]);

                tempMax = max( tempMax, p.first );
                grid[i][p.second] = -1;
            }
            maxSum += tempMax;
        }

        return maxSum;
    }
};