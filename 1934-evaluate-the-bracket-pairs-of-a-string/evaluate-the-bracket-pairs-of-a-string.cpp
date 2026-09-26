class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        string ans ="",t="";
        int f =0;
        unordered_map<string,string> m ;
        for(int i =0;i<k.size();i++){
            m[k[i][0]]=k[i][1]; 
        }
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                f =1;
                continue;
            }
            else if(s[i]==')'){
                if(m.find(t)!=m.end()){
                    ans+=m[t];
                }
                else{
                    ans+="?";
                }
                t="";
                f =0 ;
                continue;
            }
            if(f==0){
                ans+=s[i];
            }
            else{
                t+=s[i];
            }
        }
        return ans ;
    }
};