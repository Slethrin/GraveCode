class Solution {
    public String smallestPalindrome(String s) {
         int n = s.length();

        ArrayList<Integer> freq = new ArrayList<>(Collections.nCopies(26, 0));

        // Count frequencies
        for (char c : s.toCharArray()) {
            freq.set(c - 'a', freq.get(c - 'a') + 1);
        }

        StringBuilder firstHalf = new StringBuilder();
        char middle = '\0';

        // Build first half
        for (int i = 0; i < 26; i++) {
            if (freq.get(i) % 2 == 1) {
                middle = (char) ('a' + i);
            }

            for (int j = 0; j < freq.get(i) / 2; j++) {
                firstHalf.append((char) ('a' + i));
            }
        }

        String secondHalf = new StringBuilder(firstHalf).reverse().toString();

        if (n % 2 == 1) {
            firstHalf.append(middle);
        }

        firstHalf.append(secondHalf);

        return firstHalf.toString();
    }
}