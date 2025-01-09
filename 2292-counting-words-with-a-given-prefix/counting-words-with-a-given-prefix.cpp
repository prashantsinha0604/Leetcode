class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0 ;
        for(int i = 0 ; i < words.size(); i++)
        {
            int flag = 0 ;
            for(int j = 0 ; j < pref.size(); j++ )
            {
                if( words[i][j] == pref[j] )
                {
                    flag++;
                    
                }
                else
                {
                    break;
                }
            }
            if( flag == pref.size() )
            {
                cnt++;
            }
        }
        return cnt ;
    }

    
};