class Solution {
public:
    bool checkValidString(string s) {
        

        int cnt = 0;

        int cnt_star = 0;

        for(int i = 0; i < s.size(); i++ )
        {
            if( s[i] == '(' )
            {
                cnt++;
            }
            else if( s[i] == ')') 
            {
                if( cnt > 0 )
                {
                    cnt--;
                }
                else
                {
                    if( cnt_star > 0 )
                    {
                        cnt_star--;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                cnt_star++;
            }
        }


        cnt = 0, cnt_star = 0;

        for(int i = s.size() - 1; i > -1; i-- )
        {
            if( s[i] == ')' )
            {
                cnt++;
            }
            else if( s[i] == '(' )
            {
                if( cnt > 0 )
                {
                    cnt--;
                }
                else
                {
                    if( cnt_star > 0 )
                    {
                        cnt_star--;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                cnt_star++;
            }
        }
        return true;
    }
};