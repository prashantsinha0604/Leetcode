class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt_special = 0 ;
        int n = word.size(); 
        unordered_set < char > s;
        for( int i = 0 ; i < n ; i++ )
        {
            s.insert( word[i] );
        }
        for(auto i : s )
        {
            cout << i << " ";
        }

        for( int i = 0 ; i < n ; i++ )
        {
            if(word[i] >= 'a' and word[i] <= 'z')
            {
                char c = toupper( word[i] );
                if(s.find(c) != s.end() )
                {
                    cnt_special++ ;
                    s.erase(word[i] );
                    s.erase(c);
                }
            }
            else 
            {
                char c = tolower( word[i] );
                if(s.find(c) != s.end() )
                {
                    cnt_special++;
                    s.erase( word[i] );
                    s.erase(c);
                    
                }
            }
        }
        

    

        return cnt_special;
    }
};