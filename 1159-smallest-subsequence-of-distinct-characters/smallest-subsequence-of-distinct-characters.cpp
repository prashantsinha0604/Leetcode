class Solution {
public:
    string smallestSubsequence(string s) {

        vector < int > idx ( 26 , 0 );
        vector < bool > freq ( 26 , false );

        for(int i = 0 ; i < s.size(); i++ )
        {
            idx[s[i] - 'a' ] = i ;
        }

        string ans = "";
        for(int i = 0 ; i < s.size(); i++)
        {

            if( freq[s[i] - 'a'] == true)
            {
                continue;
            }

            while( ans.size() > 0 and ans.back() > s[i] and idx[ans.back() - 'a'] > i )
            {
                freq[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            freq[s[i] - 'a'] = true ;
            ans = ans + s[i];
        }
        
        return ans ;
    }
};