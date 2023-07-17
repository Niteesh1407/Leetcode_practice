//link: https://leetcode.com/problems/add-two-numbers-ii/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        ListNode* ll=new ListNode();
        while(l1!=NULL){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            s2.push(l2->val);
            l2=l2->next;
        }
        int c=0,s=0;
        while(!s1.empty() || !s2.empty()){
            if(!s1.empty()){
                s=s+s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                s=s+s2.top();
                s2.pop();
            }
            ll->val=s%10;
            c=s/10;
            ListNode* node=new ListNode(c);
            node->next=ll;
            ll=node;
            s=c;
        }
        if(c==0)
        return ll->next;
        return ll;
    }
};
