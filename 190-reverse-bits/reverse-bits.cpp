class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         uint32_t ans = 0 ;
        string binary_string = "";
        for( int i = 0 ; i < 32 ; i++ )
        {
            ans = (n >> i ) & 1 ;
            if ( ans == 0 )
            {
                binary_string = binary_string + '0';
            }
            else 
            {
                binary_string = binary_string + '1' ;
            }
        }
        ans = 0 ; 
        for(int i = 0 ; i < binary_string.size(); i++ )
        {
            ans = ans * 2 + (binary_string[i] - '0');
        }
        return ans ;
    }
};