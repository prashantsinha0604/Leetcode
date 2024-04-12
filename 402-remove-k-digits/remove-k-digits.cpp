class Solution {
public:
    string removeKdigits(string num, int k) {
        stack< char > st;


        for(int i = 0; i < num.size(); i++ )
        {
            while( k > 0 and !st.empty() and st.top() > num[i] )
            {
                k--;
                st.pop();
            }

            if( !st.empty() or num[i] != '0' )
            {
                st.push( num[i] );  
            }
        }

        while( k > 0 and !st.empty() )
        {
            k--;
            st.pop();
        }   

        string ans = "";


        if( st.empty() )
        {
            return "0";
        }

        while( !st.empty() )
        {
            ans += st.top();
            st.pop();
        }

        reverse( begin( ans ), end( ans ) );

        return ans;
    }
};