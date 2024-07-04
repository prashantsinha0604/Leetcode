class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map < int , int > mp ;
        vector<int> ans;

        for( auto i : nums1 )
        {
            mp[i]++;
        }

        for( int i = 0 ; i < nums2.size() ; i++ )
        {
            if( mp.find(nums2[i]) != mp.end() and mp[nums2[i]] > 0 )
            {
                ans.push_back( nums2[i] );
                mp[nums2[i]]--;
            }
        }

        return ans;
    }
};