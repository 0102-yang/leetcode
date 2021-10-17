package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-15 18:09:27
 */
class AddStrings {

    public static void main(String[] args) {
        Solution solution = new AddStrings().new Solution();
        solution.addStrings("11", "123");
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public String addStrings(String num1, String num2) {
            int len1 = num1.length();
            int len2 = num2.length();
            int add = 0;
            StringBuilder res = new StringBuilder();

            int i = 0;
            int j = 0;
            while (i < len1 || j < len2 || add != 0) {
                int t1 = i < len1 ? num1.charAt(len1 - 1 - i) - '0' : 0;
                int t2 = j < len2 ? num2.charAt(len2 - 1 - i) - '0' : 0;
                int tmp = t1 + t2 + add;

                res.append(tmp % 10);
                add = tmp / 10;

                i++;
                j++;
            }

            return res.reverse().toString();
//            if (num1.length() > num2.length()) {
//                String tmp = num1;
//                num1 = num2;
//                num2 = tmp;
//            }
//            int len1 = num1.length();
//            int len2 = num2.length();
//
//            StringBuilder res = new StringBuilder();
//            boolean isAdd = false;
//            for (int i = 0; i < len1; i++) {
//                int t1 = num1.charAt(len1 - 1 - i) - '0';
//                int t2 = num2.charAt(len2 - 1 - i) - '0';
//                int t3 = t1 + t2 + (isAdd ? 1 : 0);
//
//                if (t3 >= 10) {
//                    isAdd = true;
//                    t3 %= 10;
//                } else {
//                    isAdd = false;
//                }
//                res.append(t3);
//            }
//
//            for (int i = len1; i < len2; i++) {
//                int t = num2.charAt(len2 - 1 - i) - '0';
//                int tmp = t + (isAdd ? 1 : 0);
//
//                if (tmp >= 10) {
//                    isAdd = true;
//                    tmp %= 10;
//                } else {
//                    isAdd = false;
//                }
//                res.append(tmp);
//            }
//
//            if (isAdd) {
//                res.append(1);
//            }
//
//            return res.reverse().toString();
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
