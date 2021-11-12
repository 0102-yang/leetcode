package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-20 11:03:39
 */
class GzCJIP {

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int minCostClimbingStairs(int[] cost) {
            int[] dpArray = new int[cost.length];
            dpArray[0] = cost[0];
            dpArray[1] = cost[1];

            for (int i = 2; i < dpArray.length; i++) {
                dpArray[i] = Math.min(dpArray[i - 1], dpArray[i - 2]) + cost[i];
            }

            return Math.min(dpArray[dpArray.length - 1], dpArray[dpArray.length - 2]);
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
