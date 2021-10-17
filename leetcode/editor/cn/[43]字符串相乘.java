package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-14 20:39:51
 */
class MultiplyStrings {

    public static void main(String[] args) {
        Solution solution = new MultiplyStrings().new Solution();
        solution.multiply("2", "3");
    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public String multiply(String num1, String num2) {
            // Let the length of num2 to be minimum.
            if (num1.length() < num2.length()) {
                String tmp = num1;
                num1 = num2;
                num2 = tmp;
            }
            int minimumLen = num2.length();
            String res = "0";

            for (int i = 0; i < minimumLen; i++) {
                String tmp = multiplyByTimes(num1, num2.charAt(minimumLen - 1 - i) - '0');

                res = add(res, tmp + "0".repeat(i));
            }

            return res;
        }

        private String multiplyByTimes(String num, int times) {
            if (times == 0) {
                return "0";
            }
            String res = num;
            for (int i = 1; i < times; i++) {
                res = add(res, num);
            }
            return res;
        }

        private String add(String num1, String num2) {
            int len1 = num1.length();
            int len2 = num2.length();
            int add = 0;
            StringBuilder res = new StringBuilder();

            int i = 0;
            int j = 0;
            while (i < len1 || j < len2 || add != 0) {
                int t1 = i < len1 ? num1.charAt(len1 - 1 - i) - '0' : 0;
                int t2 = j < len2 ? num2.charAt(len2 - 1 - j) - '0' : 0;
                int tmp = t1 + t2 + add;

                res.append(tmp % 10);
                add = tmp / 10;

                i++;
                j++;
            }

            return res.reverse().toString();
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
