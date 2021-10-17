package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-13 11:28:23
 */
class ReverseWordsInAStringIii {

    public static void main(String[] args) {
        Solution solution = new ReverseWordsInAStringIii().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public String reverseWords(String s) {
            String[] words = s.split(" ");
            StringBuilder res = new StringBuilder();

            res.append(reverseString(words[0]));
            for (int i = 1; i < words.length; i++) {
                res.append(' ').append(reverseString(words[i]));
            }

            return res.toString();
        }

        private String reverseString(String s) {
            StringBuilder res = new StringBuilder();
            for (int i = s.length() - 1; i >= 0; i--) {
                res.append(s.charAt(i));
            }
            return res.toString();
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
