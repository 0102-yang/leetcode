package leetcode.editor.cn;

import java.util.Arrays;

/**
 * @author yang
 * @date 2021-10-13 22:48:40
 */
class ThreeSumClosest {

    public static void main(String[] args) {
        Solution solution = new ThreeSumClosest().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int threeSumClosest(int[] nums, int target) {
            Arrays.sort(nums);
            int len = nums.length;
            int res = (Integer.MAX_VALUE) >> 1;

            for (int i = 0; i < len; i++) {
                if (i > 0 && nums[i] == nums[i - 1]) {
                    continue;
                }

                int j = i + 1;
                int k = len - 1;
                while (j < k) {
                    int tmp = nums[i] + nums[j] + nums[k];
                    if (tmp == target) {
                        return target;
                    }

                    if (Math.abs(tmp - target) < Math.abs((res - target))) {
                        res = tmp;
                    }

                    if (tmp > target) {
                        int tmpK = k - 1;
                        while (j < tmpK && nums[tmpK] == nums[k]) {
                            --tmpK;
                        }
                        k = tmpK;
                    } else {
                        int tmpJ = j + 1;
                        while (tmpJ < k && nums[tmpJ] == nums[j]) {
                            ++tmpJ;
                        }
                        j = tmpJ;
                    }
                }
            }
            return res;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
