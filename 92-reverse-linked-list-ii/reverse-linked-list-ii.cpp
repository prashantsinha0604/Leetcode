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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * prev = nullptr , *curr = head , * next;
        
        ListNode * dummyNode = new ListNode();
        dummyNode -> next = head ;
        ListNode * j = dummyNode ;

        for( int i = 0 ; i < left - 1 ; i++ )
        {
            j = j -> next ;
            curr = curr -> next ;
        }

        ListNode * rightSide = curr ;
        while( left <= right )
        {
            next = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = next ;
            left = left + 1 ;
        }

        j -> next = prev ;
        rightSide -> next = curr;
        return dummyNode -> next ;
    }
};