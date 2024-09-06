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
    ListNode* sortList(ListNode* head) {
        ListNode * i = head  ;
        vector<int> temp ;

        while( i )
        {
            temp.push_back( i -> val );
            i = i -> next ;
        }

        sort( begin( temp ) , end( temp ) ) ;

        ListNode *dummyNode = new ListNode( -1 );
        ListNode * dummy = dummyNode ;

        for( int i = 0 ; i < temp.size(); i++ )
        {
            ListNode * tempNode = new ListNode( temp[i] );
            dummy -> next = tempNode ;
            dummy = dummy -> next ;
        }

        return dummyNode -> next ;
    }
};