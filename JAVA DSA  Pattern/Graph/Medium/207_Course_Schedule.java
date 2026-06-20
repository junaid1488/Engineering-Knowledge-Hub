import java.util.*;

class Solution {

    public boolean canFinish(
        int numCourses,
        int[][] prerequisites
    ) {

        List<Integer>[] graph =
            new ArrayList[numCourses];

        int[] indegree =
            new int[numCourses];

        for (int i = 0; i < numCourses; i++) {

            graph[i] =
                new ArrayList<>();
        }

        for (int[] edge : prerequisites) {

            graph[edge[1]]
                .add(edge[0]);

            indegree[edge[0]]++;
        }

        Queue<Integer> queue =
            new LinkedList<>();

        for (int i = 0; i < numCourses; i++) {

            if (indegree[i] == 0) {

                queue.offer(i);
            }
        }

        int completed = 0;

        while (!queue.isEmpty()) {

            int course =
                queue.poll();

            completed++;

            for (int next : graph[course]) {

                indegree[next]--;

                if (indegree[next] == 0) {

                    queue.offer(next);
                }
            }
        }

        return completed ==
               numCourses;
    }
}
