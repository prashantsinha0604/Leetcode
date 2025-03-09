class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> number(n*n +1,0);
        for( int i = 0; i < grid.size(); i++)
        {
            for( int j = 0 ; j < grid[0].size();j++) 
            {
                number[grid[i][j] ]++;
            }
        }

        int num1 = -1 , num2 = -1 ;

        for(int i = 1; i < number.size(); i++ )
        {
            if(number[i] == 2 )
            {
                num1 = i ;
            }
            if( number[i] == 0 )
            {
                num2 = i ;
            }
        }

        return {num1, num2};
    }
};