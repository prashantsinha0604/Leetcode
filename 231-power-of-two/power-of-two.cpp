class Solution {
public:
    bool isPowerOfTwo(int n) {
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

        if( n % 2 == 0 )
        {
            n = n / 2 ;
            ans = isPowerOfTwo( n );
        }
        
        return ans ;
    }
};