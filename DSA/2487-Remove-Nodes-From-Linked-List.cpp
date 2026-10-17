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
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);
        ListNode* curr = head;
        int maxSeen = curr->val;
        while (curr->next != nullptr) {
            if (curr->next->val < maxSeen) {
                curr->next = curr->next->next; 
            } else {
                maxSeen = curr->next->val;
                curr = curr->next;
            }
        }
        return reverseList(head);
    }
};