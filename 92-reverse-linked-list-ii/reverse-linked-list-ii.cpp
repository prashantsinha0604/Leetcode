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
        ListNode * dummyNode = new ListNode() , * curr = head ;
        int size = 0 ;
        ListNode * i = dummyNode ;
        // while( curr )
        // {
        //     size++;
        //     curr = curr -> next ;
        // }

        if( left == right  )
        {
            return head;
        }
        curr = head;
        vector < int > v ;
        while( curr )
        {
            v.push_back( curr -> val );
            curr = curr -> next ;
        }
        int low = left - 1 , high = right - 1 ;
        while( low <= high )
        {
            swap( v[low++] , v[high--]);
        }

        for( int j = 0 ; j < v.size(); j++ )
        {
            ListNode * tempNode = new ListNode( v[j] );
            i -> next = tempNode ;
            i = i -> next; 
        }

        return dummyNode -> next ;



        
    }
};