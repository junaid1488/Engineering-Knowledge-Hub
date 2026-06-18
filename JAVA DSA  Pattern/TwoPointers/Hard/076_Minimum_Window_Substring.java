import java.util.*;

class Solution {

    public String minWindow(
        String s,
        String t
    ) {

        if (s.length() < t.length()) {
            return "";
        }

        Map<Character, Integer> target =
            new HashMap<>();

        for (char c : t.toCharArray()) {
            target.put(
                c,
                target.getOrDefault(c, 0) + 1
            );
        }

        int required = target.size();
        int formed = 0;

        Map<Character, Integer> window =
            new HashMap<>();

        int left = 0;

        int minLen = Integer.MAX_VALUE;
        int start = 0;

        for (
            int right = 0;
            right < s.length();
            right++
        ) {

            char c = s.charAt(right);

            window.put(
                c,
                window.getOrDefault(c, 0) + 1
            );

            if (
                target.containsKey(c)
                &&
                window.get(c).intValue()
                ==
                target.get(c).intValue()
            ) {
                formed++;
            }

            while (formed == required) {

                if (
                    right - left + 1
                    < minLen
                ) {

                    minLen =
                        right - left + 1;

                    start = left;
                }

                char ch =
                    s.charAt(left);

                window.put(
                    ch,
                    window.get(ch) - 1
                );

                if (
                    target.containsKey(ch)
                    &&
                    window.get(ch)
                    <
                    target.get(ch)
                ) {
                    formed--;
                }

                left++;
            }
        }

        return minLen ==
               Integer.MAX_VALUE
               ? ""
               : s.substring(
                    start,
                    start + minLen
                 );
    }
}
