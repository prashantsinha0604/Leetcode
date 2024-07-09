class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans ="";
        int n = s.length();
        char c ;
        for( int i = 0 ; i < s.size() ; i++ )
        {
            ans.push_back( s[ ( i + k ) % n ] );
        }

        return ans ;
    }
};