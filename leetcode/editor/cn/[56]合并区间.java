// 以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。请你合并所有重叠的区间，并返
// 回一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间。
//
//
//
// 示例 1：
//
//
// 输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
// 输出：[[1,6],[8,10],[15,18]]
// 解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
//
//
// 示例 2：
//
//
// 输入：intervals = [[1,4],[4,5]]
// 输出：[[1,5]]
// 解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。
//
//
//
// 提示：
//
//
// 1 <= intervals.length <= 104
// intervals[i].length == 2
// 0 <= starti <= endi <= 104
//
// Related Topics 数组 排序
// 👍 1048 👎 0

package leetcode.editor.cn;

// author: yang
// createTime: 2021-08-06 23:15:49

import java.util.Arrays;
import java.util.Comparator;
import java.util.Map;
import java.util.TreeMap;

class MergeIntervals {

    public static void main(String[] args) {
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public static int[][] merge(int[][] intervals) {
            // 将数组按照第一个元素的大小排序
            Arrays.sort(intervals, Comparator.comparingInt(o -> o[0]));

            Map<Integer, Integer> map = new TreeMap<>();
            int processBegin = intervals[0][0], processEnd = intervals[0][1];
            map.put(processBegin, processEnd);

            for (int i = 1; i < intervals.length; i++) {
                var line = intervals[i];

                if (line[0] > processEnd) {
                    // 增加新的行
                    processBegin = line[0];
                    processEnd = line[1];
                    map.put(processBegin, processEnd);
                } else if (line[1] > processEnd) {
                    processEnd = line[1];
                    map.put(processBegin, processEnd);
                }
            }

            // 形成结果集
            int[][] res = new int[map.size()][2];
            int index = 0;
            for (var entry : map.entrySet()) {
                res[index][0] = entry.getKey();
                res[index][1] = entry.getValue();
                index++;
            }

            return res;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
