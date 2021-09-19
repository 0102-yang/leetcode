package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-19 23:22:59
 */
class JFETK5 {

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {
        public String addBinary(String a, String b) {
            StringBuilder resBuilder = new StringBuilder();

            int aLen = a.length() - 1;
            int bLen = b.length() - 1;
            boolean addOn = false;

            while (aLen >= 0 || bLen >= 0) {
                // Get single bit from both strings, add them together
                // and put into result collection.
                int tmpA = aLen >= 0 ? a.charAt(aLen) - '0' : 0;
                int tmpB = bLen >= 0 ? b.charAt(bLen) - '0' : 0;
                int tmpRes = tmpA ^ tmpB ^ (addOn ? 1 : 0);
                resBuilder.append(tmpRes);

                // Change the addOn flag.
                if (addOn) {
                    if (tmpA != 1 && tmpB != 1) {
                        addOn = false;
                    }
                } else {
                    if (tmpA == 1 && tmpB == 1) {
                        addOn = true;
                    }
                }

                aLen--;
                bLen--;
            }

            if (addOn) {
                resBuilder.append(1);
            }

            return resBuilder.reverse().toString();
        }
    }
    // leetcode submit region end(Prohibit modification and deletion)

}
