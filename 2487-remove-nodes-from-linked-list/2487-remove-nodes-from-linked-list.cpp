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
    ListNode* removeNodes(ListNode* head) 
    {
        if (!head) return nullptr;
        
        ListNode* next = removeNodes(head->next);
        
        if (next && next->val > head->val) 
        {
            delete head;
            return next;
        }
        
        head->next = next;
        return head;
    }

};