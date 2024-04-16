class Solution {
public:
    
    
    
    int maximumPrimeDifference(vector<int>& nums) {
        int maxi_value = *max_element( nums.begin(), nums.end() );
        
//         sbse phle seive se sare prime find krlo...
        
        unordered_set< int > total_prime;
        
        vector< bool > prime( maxi_value + 1, true );
        
        for(int p = 2; p * p <= maxi_value; p++ )
        {
            if( prime[p] == true )
            {
                for(int i = p * p; i <= maxi_value; i += p )
                {
                    prime[i] = false;
                }
            }
        }
        
        for(int j = 2; j <= maxi_value; j++ )
        {
            if( prime[j] )
            {
                total_prime.insert( j );
            }
        }
        
        int first_prime = -1;
        for(int i = 0; i < nums.size(); i++ )
        {
            if( total_prime.find( nums[i] ) != total_prime.end() )
            {
                first_prime = i;
                break;
            }
        }
        
        int last_prime_idx = -1;
        for(int i = nums.size() - 1; i > -1; i-- )
        {
            if( total_prime.find( nums[i] ) != total_prime.end() )
            {
               last_prime_idx  = i;
               break;
            }
        }
        
        int answer = abs( last_prime_idx - first_prime );
        
        return answer;
    }
};