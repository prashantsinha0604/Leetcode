class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
       long long int sum = 0;
        for(auto &x : chalk)
        {
            sum += x;
        }
        k = k % sum;

        
        for( int i = 0 ; i < chalk.size(); i++ )
        {
            if( chalk[i] > k )
            {
                return i ;
            }
            else
            {
                k = k - chalk[i];
            }

           
        }

        return 0 ;
    }
};