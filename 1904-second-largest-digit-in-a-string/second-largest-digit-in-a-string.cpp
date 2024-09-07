class Solution {
public:
    int secondHighest(string s) {
        int largest = -1 ;
        int slargest = -1;

        for( int i = 0 ; i < s.size(); i++ )
        {
            if( s[i] >= '0' and s[i] <= '9')
            {
                int temp = s[i] - '0' ;
                cout << temp << endl ;
                if( temp > largest )
                {
                    slargest = largest ;
                    largest =  temp ;
                }
                else if( temp < largest and temp > slargest )
                {
                    slargest = temp ;
                }
            }
        }

        return slargest ;
    }
};