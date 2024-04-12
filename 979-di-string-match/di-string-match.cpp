class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size() ;
        int st = 0 , e = n  ;
        int i = 0 ;
        vector < int > v ;
        while ( i < n )
        {
            if ( s[i] == 'I' )
            {
                v.push_back ( st );
                st++;
                i++;
            }
            else
            {
                v.push_back( e );
                e--;
                i++;
            }

        }
       
        while ( st <= e )
        {
            v.push_back( st++ );
        }
        return v ;
    }
};