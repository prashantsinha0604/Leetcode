class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0 ;
        string s = to_string( n );

        for( int i = 0 ; i < s.length(); i++ )
        {
            char ch = s[i];
            if( i % 2 == 0 )
            {
                sum+= ch -'0';
            }
            else
            {
                sum -= ch - '0';
            }
        }
        return sum ;
    }
};