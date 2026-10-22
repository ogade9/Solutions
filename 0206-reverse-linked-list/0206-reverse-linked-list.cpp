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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while(curr != nullptr){
            //set a node next to the current node
            ListNode *next1 = curr -> next;
            //set the current node to the previous node
            curr -> next = prev;
            prev = curr;
            //let current iterate
            curr = next1;
        
            
            
        }
        return prev;
    }
};