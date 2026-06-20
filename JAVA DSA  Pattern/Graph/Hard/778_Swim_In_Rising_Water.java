import java.util.*;

class Solution {

    public int swimInWater(
        int[][] grid
    ) {

        int n = grid.length;

        PriorityQueue<int[]> pq =
            new PriorityQueue<>(
                (a, b) ->
                    a[0] - b[0]
            );

        boolean[][] visited =
            new boolean[n][n];

        pq.offer(
            new int[]{
                grid[0][0],
                0,
                0
            }
        );

        int[][] dir = {
            {1,0},
            {-1,0},
            {0,1},
            {0,-1}
        };

        while (!pq.isEmpty()) {

            int[] curr =
                pq.poll();

            int time = curr[0];
            int row = curr[1];
            int col = curr[2];

            if (
                row == n - 1 &&
                col == n - 1
            ) {

                return time;
            }

            if (
                visited[row][col]
            ) {
                continue;
            }

            visited[row][col] =
                true;

            for (
                int[] d :
                dir
            ) {

                int nr =
                    row + d[0];

                int nc =
                    col + d[1];

                if (
                    nr >= 0 &&
                    nc >= 0 &&
                    nr < n &&
                    nc < n &&
                    !visited[nr][nc]
                ) {

                    pq.offer(
                        new int[]{
                            Math.max(
                                time,
                                grid[nr][nc]
                            ),
                            nr,
                            nc
                        }
                    );
                }
            }
        }

        return -1;
    }
}
