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


        if( head == nullptr or head -> next == nullptr )
        {
            return head;
        }
        ListNode * dummyNode = new ListNode();
        dummyNode -> next = head;
        ListNode * prev = dummyNode , * curr = head , * next = head -> next ;

        while( next )
        {
            if( curr -> val == next -> val )
            {
                if( next -> next != nullptr and next -> next -> val != curr-> val )
                {
                    prev -> next = next -> next;
                    curr = prev -> next;
                    next = curr -> next;
                }
                else
                {
                    if( next -> next == nullptr )
                    {
                        prev -> next = next -> next;
                    }
                    next = next -> next;
                }
            }
            else
            {   
                prev -> next = curr ;
                prev = curr;
                next = next -> next;
                curr = curr -> next;
            }
        }

        return dummyNode -> next;
    }
};