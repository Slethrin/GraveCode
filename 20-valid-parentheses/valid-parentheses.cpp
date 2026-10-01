class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
      //  if(s.size()%2==1){ return false ;}
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                x.push(s[i]);
            }
            else {
            if(x.empty()){return false ; }
            if(s[i]==')'){
                if(x.top()=='('){
                    x.pop();
                }
                else { return false ;}
            }
             if(s[i]=='}'){
                if(x.top()=='{'){
                    x.pop();
                }
                else { return false ;}
            }
             if(s[i]==']'){
                if(x.top()=='['){
                    x.pop();
                }
                else { return false ;}
            }}}
          return   x.empty() ;
            
           
        
    }
};