class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0 ; 
        int row = grid.size();
        int col = grid[0].size();
        int up, down, left, right = 0;
        for(int i = 0 ; i < row ; i++ )
        {
            for(int j = 0 ; j  < col ; j++ )
            {
                // if(i == 0 ) // this is for 1st row 
                
                    if( grid[i][j] == 1 )
                    {
                        if( i == 0 )
                        {
                            up = 1;
                        }
                        else
                        {
                            up = grid[i - 1][j] == 0;
                        }

                        if( j == 0 )
                        {
                            left = 1;
                        }
                        else
                        {
                            left = grid[i][j - 1] == 0;
                        }


                        if( j == col - 1 )
                        {
                            right = 1;
                        }
                        else
                        {
                            right = grid[i][j + 1] == 0;
                        }

                        if( i == row - 1 )
                        {
                            down = 1;
                        }
                        else
                        {
                            down = grid[i + 1][j] == 0;
                        }

                        perimeter += up + down + left + right;
                    }
            }
        }

        return perimeter;
    }
};