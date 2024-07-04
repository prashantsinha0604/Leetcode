class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int cnt = 0 ;
        
        
        for( int i = low ; i <= high ; i++ )
        {
            string s = "";
            s = to_string( i );
            int idx = 0 ;


            if (s.length() % 2 != 0) 
            {
                continue ;
            }
            else 
            {
                idx = s.length() / 2;
            }
            int sumFirst = 0, sumLast = 0;

            for (int i = 0; i < s.length(); i++) {
                if (i < idx) 
                {
                    sumFirst = sumFirst + s[i];
                } 
                else 
                {
                    sumLast = sumLast + s[i];
                }
            }

            if( sumFirst == sumLast )
            {
                cnt++;
            }
        }

        return cnt ;
    }
};