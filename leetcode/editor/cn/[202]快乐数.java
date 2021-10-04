package leetcode.editor.cn;

import java.util.HashSet;

/**
 * @author yang
 * @date 2021-09-30 18:16:33
 */
class HappyNumber {

    public static void main(String[] args) {
        Solution solution = new HappyNumber().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public boolean isHappy(int n) {
            HashSet<Integer> set = new HashSet<>();
            while (n != 1) {
                int tmp = getNext(n);
                if (tmp == 1) {
                    return true;
                } else if (set.contains(tmp)) {
                    return false;
                } else {
                    set.add(tmp);
                }
                n = tmp;
            }
            return true;
        }

        private int getNext(int num) {
            int res = 0;
            while (num != 0) {
                int tmp = num % 10;
                res += tmp * tmp;
                num /= 10;
            }
            return res;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
