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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr, *curr = head, *next;

        if( curr -> next == nullptr )
        {
            return head;
        } 

        while( curr )
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head1 = reverseList( l1) , * head2 = reverseList( l2 );
        ListNode * i = head1 , * j = head2 ;
        ListNode * dummyNode = new ListNode();
        ListNode * k = dummyNode ;
        int carry = 0 , sum = 0 ;
        
        while( i and j )
        {
            int sum = i -> val + carry + j -> val;
            carry = (sum )/ 10;
            ListNode * temp = new ListNode( sum % 10 );
            k -> next = temp ;
            i = i -> next;
            j = j -> next ;
            k = k -> next ;
        }

        while( i )
        {
            sum = i -> val + carry ;
            carry = (sum )/ 10;
            ListNode * temp = new ListNode( sum % 10 );
            k -> next = temp ;
            k = k -> next ;
            i = i -> next ;
        }
        while( j )
        {
            sum =  carry + j -> val;
            carry = ( sum )/ 10;
            ListNode * temp = new ListNode( sum % 10 );
            k -> next = temp ;
            k = k -> next ;
            j = j -> next ;
        }

        if( carry )
        {
            ListNode * temp = new ListNode( carry );
            k -> next = temp ;
            k = k -> next ;
        }
        dummyNode = reverseList( dummyNode -> next );

        return dummyNode ;
    }
};