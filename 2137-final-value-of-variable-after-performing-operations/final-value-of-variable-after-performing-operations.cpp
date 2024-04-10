class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        vector < string > op ;
        string ans ;
        unordered_map < string , int > mp ;
        mp["--X"] = -1 ;
        mp["X--"] = -1;
        mp["X++"] = 1 ;
        mp["++X"] = 1;
        int sum = 0 ;
 
       
        
        for( int i = 0 ; i < operations.size() ; i++  )
        {
            sum = sum + mp[operations[i] ];
        }
            return sum ;
    }
};