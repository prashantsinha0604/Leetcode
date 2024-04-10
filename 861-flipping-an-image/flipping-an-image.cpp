class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n = image.size() - 1 ;


        for(int i = 0 ; i < image.size() ; i++ )
        {
            for(int j = 0 ; j < image[0].size() / 2; j++ )
            {
                swap( image[i][j] , image[i][n - j ] );
            }
        }
        
        for(int i = 0 ; i < image.size(); i++ )
        {
            for(int j = 0 ; j < image.size(); j++ )
            {
                if( image[i][j] == 0 )
                {
                    image[i][j] = 1 ;
                }
                else
                {
                    image[i][j] = 0;
                }
            }
        }

        return  image ;
    }
};