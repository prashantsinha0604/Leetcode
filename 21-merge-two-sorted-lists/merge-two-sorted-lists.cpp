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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * head = new ListNode();
        ListNode * k = head , * i = list1 , * j = list2 ;
        if( list1 and list2 == nullptr )
        {
            return list1;
        }
        if( list2 and list1 == nullptr )
        {
            return list2;
        }
        while( i and j )
        {
            if( i -> val == j -> val )
            {
                ListNode * tempNode = new ListNode( i -> val );
                k -> next = tempNode ;
                k = k -> next  ;
                tempNode = new ListNode( j -> val );
                k -> next = j ;
                k = k -> next ;
                i = i -> next ;
                j = j -> next ;
            }
            else if( i -> val <= j -> val )
            {
                ListNode * tempNode = new ListNode( i -> val );
                k -> next = tempNode ;
                k = k -> next  ;
                i = i -> next ;
            }
            else
            {
                ListNode * tempNode = new ListNode( j -> val );
                k -> next = tempNode ;
                k = k -> next  ;
                j = j -> next ;
            }
        }
        if( i and j == nullptr )
        {
            k -> next = i ;
        }

        if( j and i == nullptr )
        {
            k -> next = j ;
        }

        return head -> next ;
    }
};