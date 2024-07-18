class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int op1 , op2  ;

        stack<int> st;

        for( int i = 0 ; i < tokens.size(); i++ )
        {
            if( st.empty() )
            {
                st.push( stoi(tokens[i]) );
            }

            if( tokens[i] == "+" )
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();

                int sum = op1 + op2 ;
                st.push( sum );
            }
            else if( tokens[i] == "*" )
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();

                int sum = op1 * op2 ;
                st.push( sum );
            }
            else if( tokens[i] == "/" )
            {
                 op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();

                int sum = op1 / op2 ;
                st.push( sum );
            }
            else if( tokens[i] == "-" )
            {
                op2 = st.top();
                st.pop();
                op1 = st.top();
                st.pop();

                int sum = op1 - op2 ;
                st.push( sum );
            }
            else
            {
                st.push( stoi(tokens[i] ) );
            }
        }

        return st.top();
    }
};