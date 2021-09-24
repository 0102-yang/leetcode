package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-24 10:05:35
 */
class JJ0w9p {

    public static void main(String[] args) {
        Solution solution = new JJ0w9p().new Solution();
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {
        public int mySqrt(int x) {
            int left = 1, right = x / 2 + 1;
            while (left <= right) {
                /* 防止出现整型溢出的风险 */
                int mid = left + ((right - left) >> 1);
                if (mid > x / mid) {
                    right = mid - 1;
                } else if (mid < x / mid) {
                    left = mid + 1;
                } else {
                    return mid;
                }
            }

            return right;
        }
    }
    // leetcode submit region end(Prohibit modification and deletion)

}
