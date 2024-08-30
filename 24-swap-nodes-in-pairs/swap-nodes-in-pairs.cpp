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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head ;
        ListNode * next ;

        ListNode * dummyNode = new ListNode( -1 );
        ListNode * dummy = dummyNode ;
        int flag = 0 ;

        while( curr )
        {
            if( curr -> next )
            {
                flag++;
                next = curr -> next ;
                ListNode * newNode = new ListNode( next -> val );
                dummy -> next = newNode ;
                dummy = dummy-> next ;
                ListNode * i = new ListNode( curr -> val );
                dummy -> next = i ;
                dummy = dummy-> next ;
                curr = next -> next ;
            }
            else 
            {
                if( curr )
                {
                    dummy -> next = curr ;
                }
                break ;
            }
        }
        if( flag == 0 )
        {
            return head ;
        }
        return dummyNode -> next ;

    }
};