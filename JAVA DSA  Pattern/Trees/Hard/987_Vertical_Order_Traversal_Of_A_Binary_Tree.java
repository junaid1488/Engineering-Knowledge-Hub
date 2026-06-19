import java.util.*;

class Solution {

    public List<List<Integer>> verticalTraversal(
        TreeNode root
    ) {

        TreeMap<Integer,
            TreeMap<Integer,
                PriorityQueue<Integer>>> map =
                    new TreeMap<>();

        Queue<Object[]> queue =
            new LinkedList<>();

        queue.offer(
            new Object[]{
                root,
                0,
                0
            }
        );

        while (!queue.isEmpty()) {

            Object[] curr =
                queue.poll();

            TreeNode node =
                (TreeNode) curr[0];

            int row =
                (int) curr[1];

            int col =
                (int) curr[2];

            map
                .computeIfAbsent(
                    col,
                    k -> new TreeMap<>()
                )
                .computeIfAbsent(
                    row,
                    k -> new PriorityQueue<>()
                )
                .offer(node.val);

            if (node.left != null) {

                queue.offer(
                    new Object[]{
                        node.left,
                        row + 1,
                        col - 1
                    }
                );
            }

            if (node.right != null) {

                queue.offer(
                    new Object[]{
                        node.right,
                        row + 1,
                        col + 1
                    }
                );
            }
        }

        List<List<Integer>> result =
            new ArrayList<>();

        for (
            TreeMap<Integer,
                PriorityQueue<Integer>>
                rows : map.values()
        ) {

            List<Integer> list =
                new ArrayList<>();

            for (
                PriorityQueue<Integer> pq
                : rows.values()
            ) {

                while (
                    !pq.isEmpty()
                ) {

                    list.add(
                        pq.poll()
                    );
                }
            }

            result.add(list);
        }

        return result;
    }
}
