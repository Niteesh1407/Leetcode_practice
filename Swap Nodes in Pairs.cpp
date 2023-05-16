//link: https://leetcode.com/problems/swap-nodes-in-pairs/

CODE:

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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;

        ListNode* curr=head->next->next;
        ListNode* pre=head;
        head=head->next;
        head->next=pre;
        
        while(curr && curr->next){
            pre->next=curr->next;
            pre=curr;
            ListNode* list=curr->next->next;
            curr->next->next=curr;
            curr=list;
        }
        pre->next=curr;
        return head;
    }
};
