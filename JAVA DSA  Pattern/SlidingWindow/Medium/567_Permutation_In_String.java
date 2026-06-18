class Solution {

    public boolean checkInclusion(
        String s1,
        String s2
    ) {

        if (s1.length() > s2.length()) {
            return false;
        }

        int[] count1 = new int[26];
        int[] count2 = new int[26];

        for (int i = 0; i < s1.length(); i++) {

            count1[s1.charAt(i) - 'a']++;

            count2[s2.charAt(i) - 'a']++;
        }

        int matches = 0;

        for (int i = 0; i < 26; i++) {

            if (count1[i] == count2[i]) {
                matches++;
            }
        }

        int left = 0;

        for (
            int right = s1.length();
            right < s2.length();
            right++
        ) {

            if (matches == 26) {
                return true;
            }

            int index =
                s2.charAt(right) - 'a';

            count2[index]++;

            if (count1[index] == count2[index]) {
                matches++;
            } else if (
                count1[index] + 1 ==
                count2[index]
            ) {
                matches--;
            }

            index =
                s2.charAt(left) - 'a';

            count2[index]--;

            if (count1[index] == count2[index]) {
                matches++;
            } else if (
                count1[index] - 1 ==
                count2[index]
            ) {
                matches--;
            }

            left++;
        }

        return matches == 26;
    }
}
