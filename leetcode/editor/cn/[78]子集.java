package leetcode.editor.cn;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;

/**
 * @author yang
 * @date 2021-11-12 20:30:44
 */
class Subsets {

    public static void main(String[] args) {
        Solution solution = new Subsets().new Solution();
        solution.subsets(new int[]{1, 2, 3});
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        private final List<List<Integer>> res = new LinkedList<>();

        private final Set<Integer> set = new HashSet<>();

        public List<List<Integer>> subsets(int[] nums) {
            subsets(nums, new LinkedList<>(), 0);
            return this.res;
        }

        private void subsets(int[] nums, List<Integer> list, int start) {
            this.res.add(list);
            for (int i = start; i < nums.length; i++) {
                int e = nums[i];
                if (!this.set.contains(e)) {
                    this.set.add(e);
                    List<Integer> newList = new LinkedList<>(list);
                    newList.add(e);
                    subsets(nums, newList, i + 1);
                    this.set.remove(e);
                }
            }
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
