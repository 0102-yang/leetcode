package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-01 11:33:24
 */
class XltzEq {

    public static void main(String[] args) {
        Solution solution = new XltzEq().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public boolean isPalindrome(String s) {
            s = getLowercase(s);
            int begin = 0, end = s.length() - 1;
            while (begin < end) {
                if (s.charAt(begin) != s.charAt(end)) {
                    return false;
                }
                begin++;
                end--;
            }
            return true;
        }

        private String getLowercase(String s) {
            StringBuilder stringBuilder = new StringBuilder();
            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                if (Character.isLowerCase(c) || Character.isDigit(c)) {
                    stringBuilder.append(c);
                } else if (Character.isUpperCase(c)) {
                    stringBuilder.append(Character.toLowerCase(c));
                }
            }
            return stringBuilder.toString();
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
