package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-20 02:21:32
 */
class Tvdfij {

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int pivotIndex(int[] nums) {
            int leftSum = 0;
            int rightSum = 0;
            for (int e : nums) {
                rightSum += e;
            }

            for (int i = 0; i < nums.length; i++) {
                if (leftSum == rightSum - nums[i]) {
                    return i;
                }
                leftSum += nums[i];
                rightSum -= nums[i];
            }

            return -1;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
