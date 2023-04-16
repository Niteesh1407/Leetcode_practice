//link: https://leetcode.com/contest/weekly-contest-341/problems/minimum-additions-to-make-valid-string/

CODE:

class Solution {
public:
    int addMinimum(string word) {
        int r=0;
        if(count(word.begin(),word.end(),word[0])==word.size())
            return 2*word.size();
        if(word.size()==1)
            return 2;
        if(word.size()==2){
            if(word=="ab"||word=="bc"||word=="ac")
                return 1;
            else
                return 4;
        }
        for(int i=0;i<word.size()-1;i++){
            if(word[i]=='a' && word[i+1]=='b')
                continue;
            if(word[i]=='b' && word[i+1]=='c')
                continue;
            if(word[i]=='a' && word[i+1]=='a')
                r+=2;
            if(word[i]=='b' && word[i+1]=='a')
                r+=1;
            if(word[i]=='a' && word[i+1]=='c')
                r+=1;
            if(word[i]=='b' && word[i+1]=='b')
                r+=2;
            if(word[i]=='c' && word[i+1]=='a')
                continue;
            if(word[i]=='c' && word[i+1]=='b')
                r+=1;
            if(word[i]=='c' && word[i+1]=='c')
                r+=2;
        }
        if(word[word.size()-1]=='b')
            r+=1;
        if(word[0]=='b')
            r+=1;
        if(word[0]=='c')
            r+=2;
        cout<<r;
        if(word[word.size()-1]=='a')
            r+=2;
        return r;
    }
};
