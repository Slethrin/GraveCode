class Solution {
public:
    string sumdigit(string s){
        int res =0;
        for(int i =0;i<s.size();i++){
            res+=s[i]-'0';
        }
        return to_string(res);
    }
    string digitSum(string s, int k) {
        string t ="";
        if(s.size()<=k){
            return s ; 
        }
        for(int i=0;i<s.size();i+=k){
                t += sumdigit(s.substr(i,k));
        }
        if(t.size()>k){
            return digitSum(t,k);
        }
        return t;
    }
};