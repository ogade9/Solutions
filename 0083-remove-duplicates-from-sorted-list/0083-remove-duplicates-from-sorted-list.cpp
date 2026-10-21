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
        if(head == nullptr){
            return head;
        }
        ListNode *start = head;
        ListNode *end = head;
        int a = 0;
        int b = 0;
        ListNode temp;
        while(end != nullptr){
            a = start -> val;
            b = end -> val;
            if(a == b){
               start -> next = end -> next;             
            }  
            else{
                start = end;
            }   
            end = end -> next;
        }

        return head;
        
    }
};