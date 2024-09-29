import java.util.Scanner;

class Solution {
    private int maxSum;

    private int maxPathSumHelper(TreeNode root) {
        if (root == null) {
            return 0;
        }

        int leftSum = Math.max(0, maxPathSumHelper(root.left));
        int rightSum = Math.max(0, maxPathSumHelper(root.right));

        maxSum = Math.max(maxSum, leftSum + rightSum + root.val);

        return Math.max(leftSum, rightSum) + root.val;
    }

    public int maxPathSum(TreeNode root) {
        maxSum = Integer.MIN_VALUE;
        maxPathSumHelper(root);
        return maxSum;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        TreeNode root = buildTree(scanner);
        Solution solution = new Solution();
        int maxPathSum = solution.maxPathSum(root);
        System.out.println("Maximum path sum: " + maxPathSum);
    }

    private static TreeNode buildTree(Scanner scanner) {
        int val = scanner.nextInt();

        if (val == -1) {
            return null;
        }

        TreeNode root = new TreeNode(val);
        root.left = buildTree(scanner);
        root.right = buildTree(scanner);

        return root;
    }
}

class TreeNode {
    int val;
    TreeNode left, right;

    TreeNode(int val) {
        this.val = val;
    }
}