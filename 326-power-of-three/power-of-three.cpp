class Solution {
public:
    bool isPowerOfThree(int n) {
        bool ans ;

        //base case 
        if( n <= 0 )
        {
            return false ;
        }

        if( n == 1 )
        {
            return true;
        }

        if( n % 3 == 0 )
        {
            n = n / 3 ;
            ans = isPowerOfThree( n );
        }

        return ans;
    }
};