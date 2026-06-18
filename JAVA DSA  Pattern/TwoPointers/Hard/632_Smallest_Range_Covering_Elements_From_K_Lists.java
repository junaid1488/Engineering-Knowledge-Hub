import java.util.*;

class Solution {

    public int[] smallestRange(
        List<List<Integer>> nums
    ) {

        PriorityQueue<int[]> pq =
            new PriorityQueue<>(
                (a, b) ->
                    a[0] - b[0]
            );

        int max = Integer.MIN_VALUE;

        for (
            int i = 0;
            i < nums.size();
            i++
        ) {

            int val =
                nums.get(i).get(0);

            pq.offer(
                new int[]{
                    val,
                    i,
                    0
                }
            );

            max = Math.max(
                max,
                val
            );
        }

        int start = 0;
        int end = Integer.MAX_VALUE;

        while (
            pq.size() == nums.size()
        ) {

            int[] curr =
                pq.poll();

            int min = curr[0];

            if (
                max - min
                <
                end - start
            ) {

                start = min;
                end = max;
            }

            int row = curr[1];
            int col = curr[2] + 1;

            if (
                col <
                nums.get(row).size()
            ) {

                int next =
                    nums.get(row)
                        .get(col);

                pq.offer(
                    new int[]{
                        next,
                        row,
                        col
                    }
                );

                max = Math.max(
                    max,
                    next
                );
            }
        }

        return new int[]{
            start,
            end
        };
    }
}
