class Solution {
public:
    int maximum69Number (int num) {
        vector < int > ans ;
        int max_num = 0 ;
        int rem = 0 ;
        while( num != 0 )
        {
            rem = num % 10 ;
            ans.push_back( rem );
            num = num / 10 ;
        }

        for(int i = ans.size() - 1 ; i > -1 ; i-- )
        {
            if ( ans[i] == 9 )
            {
                continue ;
            }
            else 
            {
                ans[i] = 9 ;
                break;
            }
        }
        for(int i = ans.size() - 1 ; i > -1 ; i-- )
        {
            max_num = max_num * 10 + ans[i];
        }
        return max_num;

    }
};