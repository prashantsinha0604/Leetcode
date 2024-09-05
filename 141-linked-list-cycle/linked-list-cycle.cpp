/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map < ListNode * , int > mp ;
        ListNode * i = head ;

        while( i )
        {
            if( mp.find( i ) != mp.end() )
            {
                return true ;
            }
            mp[i] = 1 ;
            i = i -> next ;
        }

        return false ;
    }
};