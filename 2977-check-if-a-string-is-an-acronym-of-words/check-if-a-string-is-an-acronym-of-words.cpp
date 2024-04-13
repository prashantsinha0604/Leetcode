class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int i = 0 , j = 0 ;
        if ( words.size() != s.size())
        {
            return false;
        }
        else
        {
           while( i < s.size() )
           {
                if ( s[i] == words[i][j] )
                {
                   i++; 
                }
                else
                {
                    return false;
                }
           }
        }
        return true;
    }
};