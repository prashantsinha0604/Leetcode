class Solution {
public:
    int climbStairs(int n) {
        
        int prev_num = 0 ;
        int curr_num = 1 ;
        int next_num = 0 ;
        int i = 0 ; 
        while ( n > 0 )
        {
            next_num = prev_num + curr_num;
            prev_num = curr_num;
            curr_num = next_num;
            n--;
        }
        return next_num;
    }
};