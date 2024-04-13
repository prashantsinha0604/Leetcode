class Solution {
public:
    string countAndSay(int n) {

        string ans = "1";
        int cnt = 1;

        n = n - 1;

        while( n-- )
        {
            string temp;
            for(int i = 0; i < ans.size(); i++ )
            {
                if( ans[i] == ans[i + 1] )
                {
                    cnt++;
                }
                else
                {
                    temp += ( cnt + '0' );
                    temp = temp + ans[i];
                    cnt = 1;
                }
            }

            ans = "";
            ans = temp;
            temp = "";
        }

        return ans;


        
    }
};