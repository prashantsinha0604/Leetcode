class Solution {
public:
    int passThePillow(int n, int time) {
        int r , q ;
        q = time / ( n - 1 );
        r = time % (n-1) ;

        if ( q & 1 )
        {
            return ( n - r );
        } 
        return ( 1 + r );
    }
};