/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map < int , int > mp ;
        ListNode * i = head;

        while( i )
        {
            mp[i ->  val ]++;
            i= i -> next ;
        }

        i = head ;

        ListNode * dummyNode = new ListNode();
        ListNode * k = dummyNode ;

        while( i )
        {
            if( mp[i -> val ] == 1 )
            {
                ListNode * tempNode = new ListNode( i -> val );
                k -> next = tempNode ;
                k = k -> next ;
                mp.erase( i -> val );
            }

            i = i -> next ;
        }

        return dummyNode -> next ;
    }
};