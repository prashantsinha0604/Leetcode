class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt_team = 0 ;
        for( int i = 0 ; i < rating.size() - 2 ; i++ )
        {
            for( int j = i+1 ; j < rating.size(); j++ )
            {
                for( int k = j+1 ; k < rating.size(); k++ )
                {
                    if( ( rating[i] < rating[j] and rating[j] < rating[k] )or (rating[i] > rating[j] and rating[j] > rating[k]) )
                    {
                        cnt_team++;
                    }
                }
            }
        }

        return cnt_team ;
    }
};