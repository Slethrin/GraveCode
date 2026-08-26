class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i =0,j=0;
        int one =0;
        int len = s.size()+10;

        string ans ="";
        while(j<s.size()){
            if(s[j]=='1')
                one++;

            while (one > k) {
                if (s[i] == '1')
                    one--;
                i++;
            }
            if(one==k){
                while (i <= j && s[i] == '0')
                i++;
                int currLen = j - i + 1;
                string curr = s.substr(i, currLen);

                if (currLen < len) {
                    len = currLen;
                    ans = curr;
                }
                else if (currLen == len) {
                    ans = min(ans, curr);
                }
            }
            j++;
        }
        return ans;
    }
};