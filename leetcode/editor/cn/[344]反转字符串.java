package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-10 23:01:52
 */
class ReverseString {

    public static void main(String[] args) {
        Solution solution = new ReverseString().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public void reverseString(char[] s) {
            int left = 0;
            int right = s.length - 1;
            int times = s.length >> 1;

            for (int i = 0; i < times; i++) {
                char tmp = s[left];
                s[left] = s[right];
                s[right] = tmp;
                left++;
                right--;
            }
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
