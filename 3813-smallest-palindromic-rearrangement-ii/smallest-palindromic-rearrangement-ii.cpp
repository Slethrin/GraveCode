class Solution {
public:
    long long nCr(long long n, long long r, long long k) {
        if (r < 0 || r > n) return 0;
        r = min(r, n - r);
        if (r == 0) return 1;

        __int128 ans = 1;
        for (long long i = 1; i <= r; i++) {
            ans = ans * (n - i + 1) / i;
            if (ans > k) return k + 1;   // safe ab, kyunki overflow se pehle __int128 handle karta hai
        }
        return (long long)ans;
    }

    long long countways(vector<int> v, int len, long long k) {
        long long tot = 1;
        for (int i = 0; i < 26; i++) {
            if (v[i] > 0) {
                tot *= nCr(len, v[i], k);
                len -= v[i];
                if (tot > k) return k + 1;
            }
        }
        return tot;
    }

    string smallestPalindrome(string s, int k) {
        int n = s.size();
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        vector<int> v(26, 0);
        int oddCount = 0;
        char mid = 0;
        for (int i = 0; i < 26; i++) {
            v[i] = freq[i] / 2;
            if (freq[i] % 2 == 1) {
                oddCount++;
                mid = 'a' + i;
            }
        }
        // palindrome possible hai ya nahi check karo
        if ((n % 2 == 1 && oddCount != 1) || (n % 2 == 0 && oddCount != 0))
            return "";

        int len = n / 2;
        long long kk = k;

        if (countways(v, len, kk) < kk) return "";

        string temp = "";
        int j = 0;
        while (j < len) {
            int f = 0;
            for (int i = 0; i < 26; i++) {
                if (v[i] > 0) {
                    v[i]--;
                    long long ways = countways(v, len - j - 1, kk);
                    if (ways >= kk) {
                        temp += ('a' + i);
                        f = 1;
                        j++;
                        break;
                    } else {
                        kk -= ways;
                        v[i]++;
                    }
                }
            }
            if (f == 0) return "";
        }

        string p = temp;
        reverse(p.begin(), p.end());
        string g = "";
        if (n % 2 == 1) g = string(1, mid);
        return temp + g + p;
    }
};