class Solution {

    public int findCircleNum(
        int[][] isConnected
    ) {

        int n = isConnected.length;

        boolean[] visited =
            new boolean[n];

        int provinces = 0;

        for (int i = 0; i < n; i++) {

            if (!visited[i]) {

                dfs(
                    i,
                    isConnected,
                    visited
                );

                provinces++;
            }
        }

        return provinces;
    }

    private void dfs(
        int city,
        int[][] graph,
        boolean[] visited
    ) {

        visited[city] = true;

        for (
            int next = 0;
            next < graph.length;
            next++
        ) {

            if (
                graph[city][next] == 1
                &&
                !visited[next]
            ) {

                dfs(
                    next,
                    graph,
                    visited
                );
            }
        }
    }
}
