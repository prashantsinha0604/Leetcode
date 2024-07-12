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
    ListNode* doubleIt(ListNode* head) {
        string ans = "";
        if( head -> val == 0 )
        {
            return head ;
        }

        ListNode * temp = head ;
        while( temp  )
        {
            ans = ans + to_string( temp -> val );
            temp = temp -> next ;
        }
        string s = ans , output="" ;
        int n1 = s.size() - 1, n2 = ans.size() - 1;
        int carry = 0; 
        while( n1 >= 0 or n2 >= 0 )
        {
            output.push_back( ((s[n1] - 48 + ans[n2] - 48 + carry ) % 10) + 48 );
            carry = (s[n1] - 48 + ans[n2] - 48 + carry ) / 10;
            n1--;
            n2--;
        }
        if( carry )
        {
            output.push_back( carry + 48 );
        }

        reverse( begin(output), end(output) );
        cout<< output ;
    
        ListNode * dummyNode = new ListNode();
        temp = dummyNode;

        for( int i = 0 ; i < output.size() ; i++ )
        {
            ListNode * tempNode = new ListNode( output[i] - '0' );
            temp -> next = tempNode;
            temp = temp -> next;
        }

        return dummyNode -> next ;
    }
};