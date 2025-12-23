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


ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode* prev_node = head;

        while(prev_node->next){
            if(prev_node->val == prev_node->next->val){
                prev_node->next = prev_node->next->next;
                continue;
            }
            prev_node = prev_node->next;
        }

        return head;
    }