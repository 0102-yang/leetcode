package leetcode.editor.cn;

import java.util.HashMap;

/**
 * @author yang
 * @date 2021-10-01 11:27:27
 */
class KLl5u1 {

    public static void main(String[] args) {
        Solution solution = new KLl5u1().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int[] twoSum(int[] numbers, int target) {
            HashMap<Integer, Integer> map = new HashMap<>(numbers.length);

            for (int i = 0; i < numbers.length; i++) {
                int tmp = target - numbers[i];
                if (map.containsKey(tmp)) {
                    return new int[]{map.get(tmp), i};
                } else {
                    map.put(numbers[i], i);
                }
            }

            return new int[]{};
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
