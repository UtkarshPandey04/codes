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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }
        temp=head;
        for(int i=0;i<cnt-n-1;i++){
            temp=temp->next;
        }
        ListNode* ptr=temp->next;
        if(ptr->next==nullptr){
            temp->next=nullptr;
        }
        else{
            temp->next=temp->next->next;
        }
        delete ptr;
        return head;
    }
};