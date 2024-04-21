class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0 , end = num ;
        long long  mid = s + ( end - s )/2;

        while ( s <= end )
        {

            if ( mid * mid == num )
            {
                return true ; 
            }
            else if ( mid * mid > num )
            {
                end = mid - 1 ; 
            }
            else
            {
                s = mid + 1 ;
            }
            mid = s + ( end - s )/2;
        }

        return false;
    }
};