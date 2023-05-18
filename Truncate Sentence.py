#link: https://leetcode.com/problems/truncate-sentence/

CODE:
  
  class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        l1=s.split(" ")
        i=0
        s1=""
        while(i<k):
            if(i==k-1):
                s1=s1+l1[i]
                break
            s1=s1+l1[i]+" "
            i=i+1
        return s1
