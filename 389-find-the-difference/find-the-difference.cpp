class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map < char , int > mp ;

        for( int i = 0 ; i < t.length() ; i++ )
        {
            mp[t[i]]++;
        }
        char ans ;
        for( int i = 0 ; i < t.length() ; i++ )
        {
           mp[s[i]]--;
        }

        for( int i = 0 ; i < t.length(); i++)
        {
            if( mp[t[i]] > 0 )
            {
                ans = t[i];
            }
        }

        return ans;
    }
};