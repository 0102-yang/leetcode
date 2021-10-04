package leetcode.editor.cn;

import java.util.HashMap;
import java.util.HashSet;

class TreeNode {

    int val;

    TreeNode left;

    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }

}

/**
 * @author yang
 * @date 2021-10-03 16:34:52
 */
class OpLdQZ {

    public static void main(String[] args) {
        Solution solution = new OpLdQZ().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)

    /**
     * Definition for a binary tree node.
     * public class TreeNode {
     * int val;
     * TreeNode left;
     * TreeNode right;
     * TreeNode() {}
     * TreeNode(int val) { this.val = val; }
     * TreeNode(int val, TreeNode left, TreeNode right) {
     * this.val = val;
     * this.left = left;
     * this.right = right;
     * }
     * }
     */
    class Solution {

        private final HashSet<Integer> set = new HashSet<>();

        private int k;

        public boolean findTarget(TreeNode root, int k) {
            this.k = k;
            return findTarget(root);
        }

        private boolean findTarget(TreeNode root) {
            if (root == null) {
                return false;
            }

            boolean flag = findTarget(root.left);
            if (flag) {
                return true;
            }

            if (this.set.contains(this.k - root.val)) {
                return true;
            } else {
                this.set.add(root.val);
            }

            return findTarget(root.right);
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
