class Solution {
public:
    string reverseWords(string s) {
        vector < string > ans ;
        string str;
        for( int i = 0 ; i < s.size(); i++ )
        {
            if ( s[i] != 32)
            {
                str = str + s[i];
            }
            else
            {
                if( str.length() > 0 )
               { 
                    ans.push_back( str );
                    str = "";
                }
            }
        }
        ans.push_back( str );
        str = "";
        
        for ( int i = ans.size() -1  ; i > -1 ; i-- )
        {
            str += ans[i];
            if ( str.size() > 0 and i != 0 )
            {
                str= str + ' ';
            }
        }
        return str ;
        
    }
};