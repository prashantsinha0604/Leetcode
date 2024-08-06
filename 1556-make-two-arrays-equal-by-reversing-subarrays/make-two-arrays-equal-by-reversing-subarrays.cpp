class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map < int , int > mp ;

        for( auto i : target )
        {
            mp[i]++;
        }

        for( auto i : arr )
        {
            if( mp.find(i) != mp.end() and mp[i] > 0 )
            {
                mp[i]--;
            }
            else 
            {
                return false ;
            }
        }

        return true;
    }
};