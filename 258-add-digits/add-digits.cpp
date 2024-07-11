class Solution {
public:
    int solve( int num )
    {
        int sum = 0 , rem = 0 , ans ;

        while( num )
        {
            rem = num % 10 ;
            sum = sum + rem ;
            num = num / 10 ;
        }
        if( sum > 9 )
        {
            ans = solve( sum );
        }
        else
        {
            ans = sum ;
        }
        return ans ;
    }
    int addDigits(int num) {
        // int sum = 0 ;
        
        return solve( num );
    }
};