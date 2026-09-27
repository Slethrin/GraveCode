class Solution {
public:
    string reverseParentheses(string s) {
        int i =0;
        stack<char> x;
        while(i<s.size()){
            if(!x.empty()&& s[i]==')' ){
                string temp ="";
                while(!x.empty()&&x.top()!='('){
                    temp+=x.top();
                    x.pop();
                }
                if(!x.empty()){
                    x.pop();
                }
                for(int j =0;j<temp.size();j++){
                    x.push(temp[j]);
                }
            }
            else{
                x.push(s[i]);
            }
            i++;
        }
        string ans ="";
        while(!x.empty()){
            ans = x.top()+ans;
            x.pop();
        }
        return ans;
    }
};