class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = num ;
        for(long long i = 1 ; i <= n / 2 +1 ; i++ )
        {
            if( i* i == num  )
            {
                return true ;
            }
        }

        return false ;
    }
};