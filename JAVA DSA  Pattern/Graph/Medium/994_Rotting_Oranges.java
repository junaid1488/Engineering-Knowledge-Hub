import java.util.*;

class Solution {

    public int orangesRotting(
        int[][] grid
    ) {

        Queue<int[]> queue =
            new LinkedList<>();

        int fresh = 0;

        for (int i = 0; i < grid.length; i++) {

            for (int j = 0; j < grid[0].length; j++) {

                if (grid[i][j] == 2) {

                    queue.offer(
                        new int[]{i, j}
                    );

                } else if (grid[i][j] == 1) {

                    fresh++;
                }
            }
        }

        int minutes = 0;

        int[][] dir = {
            {1,0},
            {-1,0},
            {0,1},
            {0,-1}
        };

        while (
            !queue.isEmpty() &&
            fresh > 0
        ) {

            int size =
                queue.size();

            for (int i = 0; i < size; i++) {

                int[] cell =
                    queue.poll();

                for (int[] d : dir) {

                    int nr =
                        cell[0] + d[0];

                    int nc =
                        cell[1] + d[1];

                    if (
                        nr >= 0 &&
                        nc >= 0 &&
                        nr < grid.length &&
                        nc < grid[0].length &&
                        grid[nr][nc] == 1
                    ) {

                        grid[nr][nc] = 2;

                        fresh--;

                        queue.offer(
                            new int[]{
                                nr,
                                nc
                            }
                        );
                    }
                }
            }

            minutes++;
        }

        return fresh == 0
               ? minutes
               : -1;
    }
}
