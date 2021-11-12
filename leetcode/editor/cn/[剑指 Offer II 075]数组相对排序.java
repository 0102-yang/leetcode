package leetcode.editor.cn;

import java.util.LinkedHashMap;
import java.util.TreeMap;

/**
 * @author yang
 * @date 2021-09-24 10:07:03
 */
class ZeroH97ZC {

    public static void main(String[] args) {
        Solution solution = new ZeroH97ZC().new Solution();
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public int[] relativeSortArray(int[] arr1, int[] arr2) {
            LinkedHashMap<Integer, Integer> numsInArray = new LinkedHashMap<>(arr2.length);
            TreeMap<Integer, Integer> numsNotInArray = new TreeMap<>();
            for (int e : arr2) {
                numsInArray.put(e, 0);
            }

            for (int e : arr1) {
                if (numsInArray.containsKey(e)) {
                    numsInArray.put(e, numsInArray.get(e) + 1);
                } else {
                    if (numsNotInArray.containsKey(e)) {
                        numsNotInArray.put(e, numsNotInArray.get(e) + 1);
                    } else {
                        numsNotInArray.put(e, 1);
                    }
                }
            }

            int i = 0;
            for (var entry : numsInArray.entrySet()) {
                int tmp = entry.getKey();
                for (int j = 0; j < entry.getValue(); j++) {
                    arr1[i] = tmp;
                    i++;
                }
            }
            for (var entry : numsNotInArray.entrySet()) {
                int tmp = entry.getKey();
                for (int j = 0; j < entry.getValue(); j++) {
                    arr1[i] = tmp;
                    i++;
                }
            }

            return arr1;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
