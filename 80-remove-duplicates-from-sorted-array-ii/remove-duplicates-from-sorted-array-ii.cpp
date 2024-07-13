class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map < int , int > mp ;
        for( auto i : nums )
        {
            mp[i]++;
        }
        int k = 0 , cnt = 0 ;
        for( int i = 0 ; i < nums.size(); i++ )
        {
            int num = nums[i];
            if( mp.find( num ) != mp.end() and mp[num] > 1 )
            {
                nums[k++] = num;
                nums[k++] = num;
                cnt = cnt +  2 ;
                mp.erase( nums[i] );
            }
            if( mp.find( num ) != mp.end() and mp[num] == 1 )
            {
                nums[k++] = num ;
                cnt = cnt + 1 ;
            }
        }
        return cnt ;
    }
};