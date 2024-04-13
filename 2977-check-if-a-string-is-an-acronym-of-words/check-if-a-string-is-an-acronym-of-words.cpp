class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if ( words.size() != s.size())
        {
            return false;
        }
        else
        {
            for(int i = 0 ; i < s.size() ; i++ )
            {
                for(int j = 0 ; j < 1 ; j++ )
                {
                    if ( s[i] != words[i][j] )
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};