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
       //Brute force
        // ListNode* temp=head;
        // stack<int> bucket;
        // while(temp!=NULL){
        //     bucket.push(temp->val);
        //     temp=temp->next;
        // }
        // ListNode* newHead = NULL;
        // ListNode* tail = NULL;

        // while(!bucket.empty()){
        //     ListNode* newNode = new ListNode(bucket.top());
        //     bucket.pop();

        //     if(newHead == NULL){
        //         newHead = newNode;
        //         tail = newNode;
        //     }
        //     else{
        //         tail->next = newNode;
        //         tail = newNode;
        //     }
        // }

        // return newHead;
        //iterative
        // ListNode* curr=head;
        // ListNode* prev=nullptr;
        // ListNode* front=nullptr;
        // while(curr!=nullptr){
        //     front=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=front;
        // }
        // return prev;
        //recursive
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* newHead=reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=nullptr;
        return newHead;
    }
};