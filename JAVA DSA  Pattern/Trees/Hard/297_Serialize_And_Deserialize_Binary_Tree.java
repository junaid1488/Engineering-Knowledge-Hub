import java.util.*;

public class Codec {

    public String serialize(
        TreeNode root
    ) {

        StringBuilder sb =
            new StringBuilder();

        dfs(root, sb);

        return sb.toString();
    }

    private void dfs(
        TreeNode node,
        StringBuilder sb
    ) {

        if (node == null) {

            sb.append("#,");

            return;
        }

        sb.append(node.val)
          .append(",");

        dfs(node.left, sb);
        dfs(node.right, sb);
    }

    public TreeNode deserialize(
        String data
    ) {

        Queue<String> queue =
            new LinkedList<>(
                Arrays.asList(
                    data.split(",")
                )
            );

        return build(queue);
    }

    private TreeNode build(
        Queue<String> queue
    ) {

        String val =
            queue.poll();

        if (val.equals("#")) {
            return null;
        }

        TreeNode node =
            new TreeNode(
                Integer.parseInt(val)
            );

        node.left =
            build(queue);

        node.right =
            build(queue);

        return node;
    }
}
