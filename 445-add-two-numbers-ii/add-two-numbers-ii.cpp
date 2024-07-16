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
        // ListNode * dummyNode = new ListNode();
        ListNode * tail = nullptr ;
        int carry = 0 , sum = 0 ;
        
        while( i and j )
        {
            int sum = i -> val + carry + j -> val;
            carry = (sum )/ 10;
            i -> val = sum % 10 ;
            tail = i;
            i = i -> next;
            j = j -> next ;
        }

        if( j and i == nullptr )
        {
            tail -> next = j;
        }

        while( i )
        {
            sum = i -> val + carry ;
            carry = (sum )/ 10;
            i -> val = sum % 10 ;
            tail = i;
            i = i -> next ;
        }

        while( j )
        {
            sum =  carry + j -> val;
            carry = ( sum )/ 10;
            j -> val = sum % 10;
            tail = j;
            j = j -> next;
        }

        if( carry )
        {
            ListNode * temp = new ListNode( carry );
            tail -> next  = temp ;
            tail = tail -> next;
        }
        l1 = reverseList( head1 );

        return l1 ;
    }
};