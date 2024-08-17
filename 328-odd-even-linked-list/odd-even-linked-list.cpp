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
    ListNode* oddEvenList(ListNode* head) {
        ListNode * dummyNode = new ListNode(-1) ;
        ListNode * dummy = dummyNode ;
        ListNode * i = head;
        int oddCnt = 1 ;
        int evenCnt = 1 ;
        while( i )
        {
            if( oddCnt % 2 == 1 )
            {
                ListNode * newNode = new ListNode( i -> val );
                dummy -> next = newNode ;
                dummy = dummy -> next ;
                
            }
            oddCnt++;
            i = i -> next  ;
        }

        i = head ;

        while( i )
        {
            if( evenCnt % 2 == 0 )
            {
                ListNode * newNode = new ListNode( i -> val );
                dummy -> next = newNode ;
                dummy = dummy -> next ;
                
            }
            evenCnt++;
            i = i -> next ;
        }

        return dummyNode -> next ;
    }
};