class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i =0,j=0,n= s.size(),ans =0;
        vector<int> freq(26,0);
        while(j<n){
            freq[s[j]-'a']++;
            while(freq[s[j]-'a']>2){
                freq[s[i]-'a']--;
                i++;
            }
            cout<<i<<" "<<j<<endl;
            ans = max(ans,j-i+1);
            j++;
        }
            ans = max(ans,j-i);
            return ans ;
    }

};