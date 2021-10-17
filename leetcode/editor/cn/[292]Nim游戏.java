package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-11 21:03:09
 */
class NimGame {

    public static void main(String[] args) {
        Solution solution = new NimGame().new Solution();
        solution.canWinNim(4);
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public boolean canWinNim(int n) {
            return n % 4 != 0;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
