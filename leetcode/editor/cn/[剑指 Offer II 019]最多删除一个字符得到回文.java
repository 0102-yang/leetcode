package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-01 11:42:40
 */
class RQku0D {

    public static void main(String[] args) {
        Solution solution = new RQku0D().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public boolean validPalindrome(String s) {
            for (int begin = 0, end = s.length() - 1; begin < end; begin++, end--) {
                if (s.charAt(begin) != s.charAt(end)) {
                    return isPalindrome(s, begin + 1, end) || isPalindrome(s, begin, end - 1);
                }
            }
            return true;
        }

        public boolean isPalindrome(String s, int begin, int end) {
            for (; begin < end; begin++, end--) {
                if (s.charAt(begin) != s.charAt(end)) {
                    return false;
                }
            }
            return true;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
