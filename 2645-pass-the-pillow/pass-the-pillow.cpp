class Solution {
public:
    int passThePillow(int n, int time) {
       int person = 1 ; 
       bool flag = false ;
       if ( time < n )
       {
        return ( time + 1 );
       }
       else
       {
            for( int i = 1 ; i <= time ; i++ )
            {
                if ( i >= n and flag == false  )
                {
                    person--;
                    if ( person == 1 )
                    {
                        flag = true ;
                    }
                }
                else if ( flag == true and i > n  )
                {
                    person++;
                    if ( person == n )
                    {
                        flag = false;
                    }
                }
                else
                {
                    person++;
                }
            }
        }
        return person;
    }
};