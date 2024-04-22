class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n =  word.size();
        int cnt_spec = 0 ; 
        unordered_map < char , int > mp , mp1;
        for( int i = 0 ; i < n ; i++ )
        {
            if( word[i] >= 'A' and word[i] <= 'Z' )
            {
                if( mp.find(word[i] ) != mp.end() )
                {
                    continue ;
                }
                else
                {
                    mp[word[i]] = i ;
                }
            }
            
        }
        for(int i = 0 ; i < n ; i++ )
        {
            mp1[word[i]] = i ;
        }

        for( int i = 0 ; i < n ; i++ )
        {
            if(word[i] >= 'a' and word[i] <= 'z' )
            {
                char c = word[i] - 32 ;
                if( mp.find(c) != mp.end() and ( mp1[word[i]] < mp[c]) )
                {
                    cnt_spec++;
                    mp.erase(c);
                }
            }
           
        }
        return cnt_spec;
    }
};