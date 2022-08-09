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
    void nextgreat ( ListNode* head , vector<int>&ans) { 
        if ( head == NULL    ) { 
            return; 
        }
        
        ListNode* temp = head -> next ; 
         
        while ( temp !=NULL ) { 
            if ( temp -> val > head -> val ){ 
                break ; 
            }
            temp = temp-> next ; 
        }
        if ( temp != NULL ) {  
        ans.push_back( temp-> val ) ; 
        } 
        else{
            ans.push_back( 0 ) ; 
        }
        nextgreat ( head -> next , ans ) ; 
        
        
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans ; 
        nextgreat ( head , ans ) ;
         
        return ans ; 
    }
};