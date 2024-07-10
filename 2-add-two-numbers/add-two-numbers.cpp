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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *i = l1 , *j = l2 ;
        
        ListNode* tail = nullptr;
        int sum = 0 , rem = 0 , carry = 0 ;
        int x = 0 ;
        while( i and j )
        {
            i -> val = i -> val + j -> val + carry;
            carry = i -> val / 10;
            i -> val %= 10;
            tail = i;
            i =  i -> next;
            j = j -> next;
        }

        if( j and i == nullptr )
        {
            tail -> next = j;
        }
        while( j )
        {
            j -> val = j -> val + carry;
            carry = j -> val / 10;
            j -> val %= 10;
            tail = j;
            j = j -> next;
        }



        while( i ) 
        {
            i -> val = i -> val + carry;
            carry = i -> val / 10;
            i -> val %= 10;
            tail = i;
            i = i -> next;
        }

        if( carry )
        {
            ListNode* node = new ListNode( carry );
            tail -> next = node;
        }

        return l1;

    }
};