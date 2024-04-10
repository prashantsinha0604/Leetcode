class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int sum = 0 ;
        unordered_map < int , int  > mp;
        for(int i = 0 ; i < arr.size(); i++ )
        {
            mp[arr[i]]++;
        }

        vector <int > ans; 
        int cnt = 0 ; 
        
        for( auto itr: mp )
        {
                ans.push_back( itr.second );
        }
        sort ( ans.begin() , ans.end() , greater < int > () );
        
        for ( int i = 0 ; i < ans.size() ; i++ )
        {
            cnt++;
            sum = sum + ans[i];
            if ( sum >= (n / 2 ) )
            {
                return cnt ;
            }
        }

        return 0 ;


        
    }
};