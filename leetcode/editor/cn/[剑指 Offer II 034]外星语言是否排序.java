package leetcode.editor.cn;

import java.util.Comparator;
import java.util.HashMap;
import java.util.TreeSet;

/**
 * @author yang
 * @date 2021-10-01 12:55:30
 */
class LwyVBB {

    public static void main(String[] args) {
        Solution solution = new LwyVBB().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        private final HashMap<Character, Integer> map = new HashMap<>(26);

        public boolean isAlienSorted(String[] words, String order) {
            init(order);
            for (int i = 0; i < words.length - 1; i++) {
                if (before(words[i], words[i + 1]) < 0) {
                    return false;
                }
            }
            return true;
        }

        private void init(String order) {
            for (int i = 0; i < order.length(); i++) {
                this.map.put(order.charAt(i), i);
            }
        }

        /**
         * 判断哪个字符串在前面
         *
         * @return 正数则s1在前面，0相等，负数s2在前面
         */
        private int before(String s1, String s2) {
            int length = Math.min(s1.length(), s2.length());
            for (int i = 0; i < length; i++) {
                int p1 = this.map.get(s1.charAt(i));
                int p2 = this.map.get(s2.charAt(i));
                if (p1 < p2) {
                    return 1;
                } else if (p1 > p2) {
                    return -1;
                }
            }

            // 长度小的在前
            if (s1.length() < s2.length()) {
                return 1;
            } else if (s1.length() > s2.length()) {
                return -1;
            }

            return 0;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
