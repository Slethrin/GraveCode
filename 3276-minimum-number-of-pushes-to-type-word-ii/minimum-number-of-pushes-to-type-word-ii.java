class Solution {
    public int minimumPushes(String s) {
        int[] fr = new int[26];

for (int i = 0; i < s.length(); i++) {
    fr[s.charAt(i) - 'a']++;
}

Arrays.sort(fr);

int c = 8, ans = 0;

for (int i = 25; i >= 0; i--) {
    ans += fr[i] * (c++ / 8);
}

return ans;

    }
}