class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans ;
        int cnt = 0 ;

        for( int i = 0 ; i < words.size(); i++ )
        {
            cnt = 0 ;
            string s = words[i];
            for( int j = 0 ; j < s.size(); j++ )
            {
                if( s[j] == x )
                {
                    cnt++;
                }
            }

            if( cnt )
            {
                ans.push_back( i );
            }
        }

        return ans;
    }
};