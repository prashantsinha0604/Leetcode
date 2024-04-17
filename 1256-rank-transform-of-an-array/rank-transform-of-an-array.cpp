class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if ( arr.size() == 0)
        {
            return {};
        }
       
        vector < pair <int , int > > v ;

        for( int i = 0 ; i < arr.size() ; i++ )
        {
            v.push_back( make_pair(arr[i] , i) );
        }

        sort( begin(v) , end(v) );
        int rank = 1 ;

        vector < int > ans(arr.size());

        for( int i = 0 ; i < arr.size() - 1 ; i++ )
        {
            if( v[i].first != v[i+1].first )
            {
                ans[v[i].second] = rank;
                rank++;
            }
            else
            {
                ans[v[i].second] = rank;
            }
        }

        ans[v[arr.size() - 1 ].second ] = rank;
        
        return ans;
        
        
    }
};