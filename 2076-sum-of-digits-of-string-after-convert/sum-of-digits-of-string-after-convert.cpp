class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0 , result = 0 ; 
        for( int i = 0  ; i < s.size(); i++ )
        {
            int temp = ( s[i] - 96 );
            while( temp )
            {
                sum = sum + (temp) % 10 ;
                temp = temp / 10 ;
            }
        }

        k--;
        
        
            while( k-- )
            {
                while( sum )
                {
                    result = result + ( sum ) % 10 ;
                    sum = sum / 10 ;
                }

                if( k )
                {
                    sum = result ;
                    result = 0 ;
                }
                else 
                {
                    return result ;
                }
            }
        


        return sum  ;
    }
};