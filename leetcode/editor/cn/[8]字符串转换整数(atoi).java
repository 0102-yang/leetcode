package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-13 11:42:41
 */
class StringToIntegerAtoi {

    public static void main(String[] args) {
        Solution solution = new StringToIntegerAtoi().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int myAtoi(String s) {
            int i = 0;
            s = s.trim();
            if ("".equals(s)) {
                return 0;
            }

            int len = s.length();
            boolean isNegative = false;
            if (s.charAt(i) == '-') {
                isNegative = true;
                i++;
            } else if (s.charAt(i) == '+') {
                i++;
            }

            long res = 0;
            while (i < len && Character.isDigit(s.charAt(i))) {
                res *= 10;
                res += s.charAt(i) - '0';
                if (isNegative && -res < Integer.MIN_VALUE) {
                    return Integer.MIN_VALUE;
                } else if (!isNegative && res > Integer.MAX_VALUE - 1) {
                    return Integer.MAX_VALUE;
                }
                i++;
            }

            return isNegative ? (int) (-res) : (int) res;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
