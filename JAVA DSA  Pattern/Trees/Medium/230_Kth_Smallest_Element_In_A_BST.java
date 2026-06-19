class Solution {

    private int count = 0;
    private int answer = 0;

    public int kthSmallest(
        TreeNode root,
        int k
    ) {

        inorder(root, k);

        return answer;
    }

    private void inorder(
        TreeNode node,
        int k
    ) {

        if (
            node == null ||
            count >= k
        ) {
            return;
        }

        inorder(
            node.left,
            k
        );

        count++;

        if (count == k) {

            answer = node.val;

            return;
        }

        inorder(
            node.right,
            k
        );
    }
}
