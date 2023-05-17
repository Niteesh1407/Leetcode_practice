//link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/\

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
    int pairSum(ListNode* head) {
        ListNode* list=head;
        int n=0;
        vector<int>v;
        while(list){
            n++;
            v.push_back(list->val);
            list=list->next;
        }
        int sum=0;
        for(int i=0;i<=(n/2-1);i++){
            if((v[i]+v[n-1-i])>sum){
                sum=v[i]+v[n-1-i];
            }
        }
        return sum;
    }
};
