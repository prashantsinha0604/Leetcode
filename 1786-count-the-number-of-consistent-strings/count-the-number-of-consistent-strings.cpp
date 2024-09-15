class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map < char , int > mp ;
        for( int i = 0 ; i < allowed.size(); i++ )
        {
            mp[allowed[i] ] = 1 ;
        }

        int cnt = 0 ;
        for( int i = 0 ; i < words.size(); i++ )
        {
            string check = words[i];
            bool flag = true ;
            for( int j = 0 ; j < check.size(); j++ )
            {
                if( mp.find( check[j] ) == mp.end() )
                {
                    flag = false ;
                }
            }
            if( flag )
            {
                cnt++;
            }
        }

        return cnt ;
    }
};