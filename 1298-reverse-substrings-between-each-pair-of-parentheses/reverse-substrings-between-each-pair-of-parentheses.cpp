class Solution {
public:
    string reverseParentheses(string s) {
        string temp;
        stack<char> st ;
        for( int i = 0 ; i < s.size(); i++ )
        {
            if( s[i] == ')' )
            {
                while( st.top() != '(' )
                {
                    temp = temp + st.top();
                    st.pop();
                }
                st.pop();
                for( int j = 0 ; j < temp.size(); j++ )
                {
                    st.push( temp[j] );
                }
                temp = "";
            }
            else 
            {
                st.push( s[i] );
            }
        }
        temp = "";
        while( !st.empty() )
        {
            temp = temp + st.top();
            st.pop();
        }

        reverse( temp.begin() , temp.end() );

        return temp ;
    }
};