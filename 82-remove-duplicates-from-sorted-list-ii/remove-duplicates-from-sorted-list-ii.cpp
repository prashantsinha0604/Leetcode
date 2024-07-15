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

        ListNode* dummyNode = new ListNode(-1);
        dummyNode -> next = head;
        ListNode* leftPrev = dummyNode;

        ListNode* curr = head, *next = head -> next;

        while( next )
        {
            if( curr -> val == next -> val )
            {
                if( next -> next != nullptr  and next -> next -> val != curr -> val )
                {
                    leftPrev -> next = next -> next;
                    curr = leftPrev -> next;
                    next = curr -> next;
                }
                else
                {
                    if( next -> next == nullptr )
                    {
                        leftPrev -> next = next -> next;
                    }
                    next = next -> next;
                }
            }
            else
            {
                next = next -> next;
                leftPrev = curr;
                curr = curr -> next;
            }
        }

        return dummyNode -> next;
    }
};