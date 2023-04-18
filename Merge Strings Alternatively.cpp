//link: https://leetcode.com/problems/merge-strings-alternately/

CODE:

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int n1=word1.size();
        int n2=word2.size();
        string s="";
        while(i<n1 && j<n2){
            s=s+word1[i]+word2[j];
            i++;
            j++;
        }
        while(i!=n1){
            s=s+word1[i];
            i++;
        }
        while(j!=n2){
            s=s+word2[j];
            j++;
        }
        return s;
    }
};
