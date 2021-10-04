package leetcode.editor.cn;

import java.util.HashMap;

/**
 * @author yang
 * @date 2021-10-01 11:59:57
 */
class DKk3P7 {

    public static void main(String[] args) {
        Solution solution = new DKk3P7().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public boolean isAnagram(String s, String t) {
//            if (s.length() != t.length() || s.length() == 1 || s.equals(t)) {
//                return false;
//            }
//            HashMap<Character, Integer> map1 = new HashMap<>(s.length());
//            HashMap<Character, Integer> map2 = new HashMap<>(t.length());
//            for (int i = 0; i < s.length(); i++) {
//                char c1 = s.charAt(i);
//                char c2 = t.charAt(i);
//                if (map1.containsKey(c1)) {
//                    map1.put(c1, map1.get(c1) + 1);
//                } else {
//                    map1.put(c1, 0);
//                }
//                if (map2.containsKey(c2)) {
//                    map2.put(c2, map2.get(c2) + 1);
//                } else {
//                    map2.put(c2, 0);
//                }
//            }
//
//            for (var entry : map1.entrySet()) {
//                char c = entry.getKey();
//                if (!map2.containsKey(c) || !map2.get(c).equals(entry.getValue())) {
//                    return false;
//                }
//            }
//
//            return true;

            if (s.length() != t.length() || s.equals(t)) {
                return false;
            }
            int[] map = new int[26];
            for (int i = 0; i < s.length(); i++) {
                map[s.charAt(i) - 'a']++;
                map[t.charAt(i) - 'a']--;
            }
            for (int e : map) {
                if (e != 0) {
                    return false;
                }
            }
            return true;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
