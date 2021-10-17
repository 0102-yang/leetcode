package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-05 08:48:10
 */
class NUPfPr {

    public static void main(String[] args) {
        Solution solution = new NUPfPr().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public boolean canPartition(int[] nums) {
            int n = nums.length;
            if (n < 2) {
                return false;
            }
            int sum = 0, maxNum = 0;
            for (int num : nums) {
                sum += num;
                maxNum = Math.max(maxNum, num);
            }
            if ((sum & 1) == 1) {
                return false;
            }
            int target = sum / 2;
            if (maxNum > target) {
                return false;
            }
            boolean[][] dp = new boolean[n][target + 1];
            for (int i = 0; i < n; i++) {
                dp[i][0] = true;
            }
            dp[0][nums[0]] = true;
            for (int i = 1; i < n; i++) {
                int num = nums[i];
                for (int j = 1; j <= target; j++) {
                    if (j >= num) {
                        dp[i][j] = dp[i - 1][j] | dp[i - 1][j - num];
                    } else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            return dp[n - 1][target];
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
