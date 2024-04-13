class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector < bool > freq( 26 , false );
        vector < int > idx ( 26 , 0 );

        for(int i = 0 ; i < s.size() ; i++ )
        {
            idx[s[i] - 'a'] = i ;
        }

        string ans = "";

        for(int i = 0; i < s.size(); i++ )
        {
            char ch = s[i];

            if( freq[ch - 'a'] == true )
            {
                continue;
            }

            while( ans.size() > 0 and ( ans.back() > s[i] ) and  idx[ans.back() - 'a'] > i ) 
            { 
                freq[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            
            
            freq[s[i] - 'a' ] = true ; 
            ans = ans + s[i];
        }
        return ans;
        
    }
};