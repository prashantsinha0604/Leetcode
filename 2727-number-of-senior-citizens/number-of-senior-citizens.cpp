class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt_senior = 0 ;
        

        for( int i = 0 ; i < details.size(); i++ )
        {
            string temp = details[i];
           

            string check = check + temp[11] + temp[12];
        
            if( check > "60" )
            {
                cnt_senior++;
            }
            check = "";
        }

        return cnt_senior ;
    }
};