import java.util.*;

class Solution {

    public boolean validPath(
        int n,
        int[][] edges,
        int source,
        int destination
    ) {

        List<Integer>[] graph =
            new ArrayList[n];

        for (int i = 0; i < n; i++) {
            graph[i] = new ArrayList<>();
        }

        for (int[] edge : edges) {

            graph[edge[0]].add(edge[1]);
            graph[edge[1]].add(edge[0]);
        }

        boolean[] visited =
            new boolean[n];

        Queue<Integer> queue =
            new LinkedList<>();

        queue.offer(source);

        visited[source] = true;

        while (!queue.isEmpty()) {

            int node = queue.poll();

            if (node == destination) {
                return true;
            }

            for (int next : graph[node]) {

                if (!visited[next]) {

                    visited[next] = true;

                    queue.offer(next);
                }
            }
        }

        return false;
    }
}
