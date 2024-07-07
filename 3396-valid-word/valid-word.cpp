class Solution {
public:
    bool isValid(string word) {
        if( word.length() < 3)
        {
            return false ;
        }
        unordered_map < char , int > mp ;
        int cnt_vowel = 0  , cnt_dig = 0  , cnt = 0 ;


        for( int i = 0 ; i < word.length() ; i++ )
        {
            if(word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i]=='u' )
            {
                cnt_vowel++;
                mp[word[i] ]++;
            }
            else if(word[i]== 'A' or word[i] == 'E' or word[i] == 'I' or word[i] == 'O' or word[i]=='U' )
            {
                cnt_vowel++;
                mp[word[i] ]++;
            }
            else if ( word[i] >= 'a' and word[i] <= 'z' or word[i] >= 'A' and word[i] <= 'Z' )
            {
                if( mp.find(word[i]) == mp.end() )
                {
                    cnt++;
                }    
            }
            else if ( word[i] >= '0' and word[i] <= '9')
            {
                cnt_dig++ ;
            }
            else
            {
                return false ;
            }
        }

        if( cnt_vowel == 0 )
        {
            return false ;
        }
        // else if( cnt_dig == 0 )
        // {
        //     return false ;
        // }
        else if( cnt == 0 )
        {
            return false ;
        }

        return true;
        
    }
};