class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt = 0 ;
        int a = 4 & 1 ;
        cout << a;
        for( int i = 0 ; i < arr.size(); i++ )
        {
            if( arr[i] % 2 == 1 )
            {
                if( cnt != 3 )
                {
                    cnt++ ;
                    
                }
                if( cnt == 3 ) 
                {
                    return true ;
                }
            }
            else{
                cnt = 0 ;
            }
        }

        return false ;
    }
};