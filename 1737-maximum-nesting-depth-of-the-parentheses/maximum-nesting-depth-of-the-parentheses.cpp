class Solution {
public:
    int maxDepth(string s) {
        stack<char> x; 
        int a = 0;
        for(int i =0;i<s.size();i++){
            if(x.empty()&&s[i]=='('){
                x.push(s[i]); continue;
            }
             if (x.size()>a){ a = x.size() ;}
            if(x.empty()==false&&s[i]=='('){
                x.push(s[i]);
            }
           else if(x.empty()==false && s[i]==')'){
                x.pop() ;
            }
           
        }
        return a ;
    }
};