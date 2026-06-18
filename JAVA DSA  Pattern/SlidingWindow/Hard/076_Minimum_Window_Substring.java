import java.util.*;

class Solution {

    public String minWindow(
        String s,
        String t
    ) {

        if (t.length() > s.length()) {
            return "";
        }

        Map<Character, Integer> countT =
            new HashMap<>();

        Map<Character, Integer> window =
            new HashMap<>();

        for (char c : t.toCharArray()) {
            countT.put(
                c,
                countT.getOrDefault(c, 0) + 1
            );
        }

        int have = 0;
        int need = countT.size();

        int left = 0;

        int[] res = {-1, -1};
        int resLen = Integer.MAX_VALUE;

        for (int right = 0;
             right < s.length();
             right++) {

            char c = s.charAt(right);

            window.put(
                c,
                window.getOrDefault(c, 0) + 1
            );

            if (
                countT.containsKey(c) &&
                window.get(c).intValue() ==
                countT.get(c).intValue()
            ) {
                have++;
            }

            while (have == need) {

                if (
                    (right - left + 1)
                    < resLen
                ) {

                    res[0] = left;
                    res[1] = right;

                    resLen =
                        right - left + 1;
                }

                char ch =
                    s.charAt(left);

                window.put(
                    ch,
                    window.get(ch) - 1
                );

                if (
                    countT.containsKey(ch) &&
                    window.get(ch) <
                    countT.get(ch)
                ) {
                    have--;
                }

                left++;
            }
        }

        return resLen ==
               Integer.MAX_VALUE
               ? ""
               : s.substring(
                    res[0],
                    res[1] + 1
                 );
    }
}
