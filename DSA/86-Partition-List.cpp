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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1=new ListNode(0);
        ListNode* dummy2=new ListNode(0);
        
        ListNode* less=dummy1;
        ListNode* greater=dummy2;
        ListNode* curr=head;
        while(curr!=nullptr){
            if(curr->val>=x){
                greater->next=curr;
                greater=greater->next;
            }
            else{
                less->next=curr;
                less=less->next;
            }
            curr=curr->next;
        }
        greater->next=nullptr;
        less->next=dummy2->next;
        return dummy1->next;
    }
};