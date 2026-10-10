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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        int cnt=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        ListNode* prev=nullptr;
        k = k % cnt;
        if (k == 0) {
            return head;
        }
        int steps = cnt - k;
        while(steps>0){
            prev=temp;
            temp=temp->next;
            steps--;
        }
        prev->next=nullptr;
        ListNode* temp2=temp;
        while(temp2->next!=nullptr){
            temp2=temp2->next;
        }
        temp2->next=head;
        return temp;
    }
};