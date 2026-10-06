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
    ListNode* mergeTwoLL(ListNode* L1,ListNode* L2){
        ListNode* dummyNode=new ListNode(-1);
        ListNode* temp=dummyNode;
        while(L1!=nullptr && L2!=nullptr){
            if(L1->val<L2->val){
                temp->next=L1;
                temp=L1;
                L1=L1->next;
            }
            else{
                temp->next=L2;
                temp=L2;
                L2=L2->next;
            }
        }
        if(L1) temp->next=L1;
        else temp->next=L2;
        return dummyNode->next;
    }
    ListNode* findMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr &&fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* middle=findMiddle(head);
        ListNode* right=middle->next;
        middle->next=nullptr;
        ListNode* left=head;
        left=sortList(left);
        right=sortList(right);
        return mergeTwoLL(left,right);
    }
};