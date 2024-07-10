class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long waitingTime = 0 , currentTime = 0 ;

        for( int i = 0 ; i < customers.size() ; i++ )
        {
            long long arrivalTime = customers[i][0];
            long long cookingTime = customers[i][1];

            if( currentTime < arrivalTime )
            {
                currentTime = arrivalTime;
            }

            currentTime += cookingTime;

            waitingTime += currentTime - arrivalTime;
        }

        return (double)waitingTime/customers.size();
        

    }
};