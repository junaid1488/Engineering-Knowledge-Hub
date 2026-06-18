import java.util.*;

class Solution {

    public int uniqueLetterString(
        String s
    ) {

        List<Integer>[] positions =
            new ArrayList[26];

        for (
            int i = 0;
            i < 26;
            i++
        ) {
            positions[i] =
                new ArrayList<>();
        }

        for (
            int i = 0;
            i < s.length();
            i++
        ) {

            positions[
                s.charAt(i) - 'A'
            ].add(i);
        }

        int result = 0;

        for (
            int c = 0;
            c < 26;
            c++
        ) {

            List<Integer> list =
                positions[c];

            int size = list.size();

            for (
                int i = 0;
                i < size;
                i++
            ) {

                int prev =
                    i == 0
                    ? -1
                    : list.get(i - 1);

                int next =
                    i == size - 1
                    ? s.length()
                    : list.get(i + 1);

                result +=
                    (list.get(i) - prev)
                    *
                    (next - list.get(i));
            }
        }

        return result;
    }
}
