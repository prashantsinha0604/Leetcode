class Solution {
public:
    double power( double x , int n )
    {
        //base case 
        if( n == 0 )
        {
            return 1;
        }
         if( n == 1 )
        {
            return x ;
        }

        double ans = power( x , n / 2 );

        if( n % 2 == 0 )
        {
            return ans * ans ;
        }
        else 
        {
            return x * ans * ans ;
        }
    }

   
    double myPow(double x, int n) {
        if( x == 0 )
        {
            return 0 ;
        }
        if( n >= 0 )
        {
            return power( x , n );
        }
        else 
        {
            int p = abs( n );
            double a = power( x , n );
            return ( 1 / a );
        }
    
    }
};