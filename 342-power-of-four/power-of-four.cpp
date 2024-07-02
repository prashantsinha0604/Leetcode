class Solution {
public:
    
       
    bool isPowerOfFour(int n) {
        bool ans ;
        //base case 
        if( n <= 0 )
        {
            return false ;
        }

        if( n == 1 )
        {
            return true ;
        }

        if( n % 4 == 0 )
        {
            n = n / 4 ;
            ans = isPowerOfFour( n );
        }
        return ans;
    }
};