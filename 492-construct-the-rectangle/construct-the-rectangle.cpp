class Solution {
public:
    vector<int> constructRectangle(int area) {
        int length = 0, width = 0;
        int minDiff = INT_MAX ;
        for(int i = 1 ; i <= sqrt(area); i++ )
        {
            if( area % i == 0 )
            {
                if( minDiff > ( i - ( area / i ) ) )
                {
                    width = i ;
                    length = area / i ;
                }
            }
        }

        return { length , width };

    }
};