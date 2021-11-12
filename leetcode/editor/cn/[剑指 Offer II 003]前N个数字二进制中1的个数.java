package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-30 18:49:30
 */
class W3tCBm {

    public static void main(String[] args) {
        Solution solution = new W3tCBm().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int[] countBits(int n) {
            int[] res = new int[n + 1];
            for (int i = 1; i <= n; i++) {
                if ((i & 1) == 1) {
                    res[i] = res[i - 1] + 1;
                } else {
                    res[i] = res[i >> 1];
                }
            }
            return res;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
