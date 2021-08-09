// 请根据每日 气温 列表 temperatures ，请计算在每一天需要等几天才会有更高的温度。如果气温在这之后都不会升高，请在该位置用 0 来代替。
//
// 示例 1:
//
//
// 输入: temperatures = [73,74,75,71,69,72,76,73]
// 输出: [1,1,4,2,1,1,0,0]
//
//
// 示例 2:
//
//
// 输入: temperatures = [30,40,50,60]
// 输出: [1,1,1,0]
//
//
// 示例 3:
//
//
// 输入: temperatures = [30,60,90]
// 输出: [1,1,0]
//
//
//
// 提示：
//
//
// 1 <= temperatures.length <= 105
// 30 <= temperatures[i] <= 100
//
// Related Topics 栈 数组 单调栈
// 👍 832 👎 0

package leetcode.editor.cn;

// author: yang
// createTime: 2021-08-09 18:54:24

import java.util.Deque;
import java.util.LinkedList;

class DailyTemperatures {
    public static void main(String[] args) {}

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {
        public int[] dailyTemperatures(int[] temperatures) {
            int length = temperatures.length;
            int[] res = new int[length];
            Deque<Integer> stack = new LinkedList<>();

            for (int i = 0; i < length; i++) {
                while (!stack.isEmpty() && temperatures[i] > temperatures[stack.peek()]) {
                    int e = stack.pop();
                    res[e] = i - e;
                }
                stack.push(i);
            }

            return res;
        }

        //        public int[] dailyTemperatures(int[] temperatures) {
        //            int[] res = new int[temperatures.length];
        //            for (int i = temperatures.length - 1; i >= 0; i--) {
        //                res[i] =
        //                        this.findLeastInterval(
        //                                temperatures[i], temperatures, i + 1,
        // temperatures.length);
        //            }
        //            return res;
        //        }
        //
        //        private int findLeastInterval(int val, int[] nums, int begin, int end) {
        //            int count = 1;
        //            while (begin < end) {
        //                if (nums[begin] > val) {
        //                    return count;
        //                }
        //                count++;
        //                begin++;
        //            }
        //            return 0;
        //        }
    }
    // leetcode submit region end(Prohibit modification and deletion)

}
