package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-17 21:26:02
 */
class Xoh6Oh {

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int divide(int a, int b) {
            long num1 = a;
            long num2 = b;
            long res = 0;

            boolean isNegative = (num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0);
            num1 = Math.abs(num1);
            num2 = Math.abs(num2);

            while (num1 >= num2) {
                long tmp = num2;
                long count = 1;

                while (num1 >= tmp) {
                    tmp <<= 1;
                    count <<= 1;
                }
                tmp >>= 1;
                count >>= 1;

                num1 -= tmp;
                res += count;
            }

            res = isNegative ? -res : res;
            if (res > Integer.MAX_VALUE || res < Integer.MIN_VALUE) {
                return Integer.MAX_VALUE;
            }
            return (int) res;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
