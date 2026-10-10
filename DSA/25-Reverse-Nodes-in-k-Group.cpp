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
    ListNode* reverse(ListNode* temp){
        ListNode* curr=temp;
        ListNode* prev=nullptr;
        ListNode* nextNode=nullptr;
        while(curr!=nullptr){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    ListNode* getKthNode(ListNode* temp,int k){
        k-=1;
        while(temp!=nullptr && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* nextNode=nullptr;
        ListNode* prevNode=nullptr;
        while(temp!=nullptr){
            ListNode* KthNode=getKthNode(temp,k);
            if(KthNode==nullptr){
                if(prevNode) prevNode->next=temp;
                break;
            }
            nextNode= KthNode->next;
            KthNode->next=nullptr;
            reverse(temp);
            if(temp==head){
                head=KthNode;
            }
            else{
                prevNode->next=KthNode;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};