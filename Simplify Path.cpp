//link: https://leetcode.com/problems/simplify-path/

CODE:

class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        string str;
        for(int i=0;i<path.size();i++){
            if(path[i]=='/')
            continue;
            string s1;
            while(i<path.length() && path[i]!='/'){
                s1=s1+path[i];
                i++;
            }
            if(s1==".")
            continue;
            else if(s1==".."){
                if(!s.empty())
                s.pop();
            }
            else
            s.push(s1);
        }
        while(!s.empty()){
            str='/'+s.top()+str;
            s.pop();
        }
        if(str.length()==0)
        return "/";
        return str;
    }
};
