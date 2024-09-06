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
    ListNode *detectCycle(ListNode *head) {

        unordered_map < ListNode * , int > mp ;
        ListNode * i = head ;

        while( i )
        {
            if( mp.find( i ) != mp.end() )
                return i ;

            mp[i]++;
            i = i -> next ;
        }

        return NULL;
    }
};