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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0 ;
        ListNode * temp = head ;

        while ( temp )
        {
            size++;
            temp = temp -> next ;
        }
        if( head == nullptr or n == 0 )
        {
            return head;
        }

        if( size == n )
        {
            temp = head -> next ;
            return temp ;
        }


        int start = size  - n ;
        int i = 1 ;
        temp = head ;
        if( size == 1 )
        {
            return NULL;
        }
        while( i < start and temp )
        {
            temp = temp -> next ;
            i++;
        }
        temp -> next = temp -> next -> next ;

        return head ;
    }
};