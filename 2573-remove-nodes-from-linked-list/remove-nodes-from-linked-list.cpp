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
    void reverse( ListNode * &head )
    {
        ListNode* prev = nullptr;
        ListNode * curr = head ;
        ListNode * next ;

        while( curr )
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    ListNode* removeNodes(ListNode* head) {

        reverse(head);

        ListNode* prev = head;
        ListNode* curr = head -> next;
        ListNode* next;
        int maxSoFar = prev -> val;
        while( curr )
        {
            if( maxSoFar > curr -> val )
            {
                prev -> next = curr -> next ;
                curr = prev -> next ;
            }
            else
            {
                maxSoFar = curr -> val ;
                prev = curr  ;
                curr = curr -> next ;
            }
        }

        reverse( head );

        return head;
    }
};