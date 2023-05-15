//link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* a=head;
        int n=0;
        while(a!=NULL){
            n++;
            a=a->next;
        }
        vector<int>v(n);
        a=head;
        if(n==1)
        return a;
        int i=0;
        while(a!=NULL){
            v[i++]=a->val;
            a=a->next;
        }
        int s=v[k-1];
        v[k-1]=v[n-k];
        v[n-k]=s;
        a=head;
        for(int k:v){
            a->val=k;
            a=a->next;
        }
        a=head;
        return a;
    }
};
