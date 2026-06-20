import java.util.*;

class Solution {

    public int ladderLength(
        String beginWord,
        String endWord,
        List<String> wordList
    ) {

        Set<String> words =
            new HashSet<>(wordList);

        if (!words.contains(endWord)) {
            return 0;
        }

        Queue<String> queue =
            new LinkedList<>();

        queue.offer(beginWord);

        int level = 1;

        while (!queue.isEmpty()) {

            int size = queue.size();

            for (int i = 0; i < size; i++) {

                String word =
                    queue.poll();

                if (
                    word.equals(endWord)
                ) {
                    return level;
                }

                char[] chars =
                    word.toCharArray();

                for (
                    int j = 0;
                    j < chars.length;
                    j++
                ) {

                    char original =
                        chars[j];

                    for (
                        char c = 'a';
                        c <= 'z';
                        c++
                    ) {

                        chars[j] = c;

                        String next =
                            new String(chars);

                        if (
                            words.contains(next)
                        ) {

                            queue.offer(next);

                            words.remove(next);
                        }
                    }

                    chars[j] = original;
                }
            }

            level++;
        }

        return 0;
    }
}
