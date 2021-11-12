// 给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。
//
// 数组中的每个元素代表你在该位置可以跳跃的最大长度。
//
// 判断你是否能够到达最后一个下标。
//
//
//
// 示例 1：
//
//
// 输入：nums = [2,3,1,1,4]
// 输出：true
// 解释：可以先跳 1 步，从下标 0 到达下标 1, 然后再从下标 1 跳 3 步到达最后一个下标。
//
//
//  示例 2：
//
//
// 输入：nums = [3,2,1,0,4]
// 输出：false
// 解释：无论怎样，总会到达下标为 3 的位置。但该下标的最大跳跃长度是 0 ， 所以永远不可能到达最后一个下标。
//
//
//
//
// 提示：
//
//
// 1 <= nums.length <= 3 * 104
// 0 <= nums[i] <= 105
//
// Related Topics 贪心 数组 动态规划
// 👍 1288 👎 0

package leetcode.editor.cn;

// author: yang
// createTime: 2021-08-06 19:18:59

class JumpGame {

    public static void main(String[] args) {
        int[] nums = {2, 3, 1, 1, 4};
        Solution.canJump(nums);
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {
        //        public static boolean canJump(int[] nums) {
        //            return Solution.canJump(nums, nums.length - 1);
        //        }
        //
        //        private static boolean canJump(int[] nums, int index) {
        //            if (index == 0) {
        //                return true;
        //            }
        //
        //            for (int i = index - 1; i >= 0; i--) {
        //                if (nums[i] + i >= index) {
        //                    return Solution.canJump(nums, i);
        //                }
        //            }
        //            return false;
        //        }

        /**
         * 官方解法
         *
         * @param nums 数组
         * @return 是否能达到最后一个下标
         */
        public static boolean canJump(int[] nums) {
            int n = nums.length;
            int rightmost = 0;
            for (int i = 0; i < n; ++i) {
                if (i <= rightmost) {
                    rightmost = Math.max(rightmost, i + nums[i]);
                    if (rightmost >= n - 1) {
                        return true;
                    }
                }
            }
            return false;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
