// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
// 有效字符串需满足：
//
//
// 左括号必须用相同类型的右括号闭合。
// 左括号必须以正确的顺序闭合。
//
//
//
//
// 示例 1：
//
//
// 输入：s = "()"
// 输出：true
//
//
// 示例 2：
//
//
// 输入：s = "()[]{}"
// 输出：true
//
//
// 示例 3：
//
//
// 输入：s = "(]"
// 输出：false
//
//
// 示例 4：
//
//
// 输入：s = "([)]"
// 输出：false
//
//
// 示例 5：
//
//
// 输入：s = "{[]}"
// 输出：true
//
//
//
// 提示：
//
//
// 1 <= s.length <= 104
// s 仅由括号 '()[]{}' 组成
//
// Related Topics 栈 字符串
// 👍 2541 👎 0

package leetcode.editor.cn;

// author: yang
// createTime: 2021-08-07 10:16:19

import java.util.LinkedList;

class ValidParentheses {

    public static void main(final String[] args) {
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        private final LinkedList<Character> list = new LinkedList<>();

        public boolean isValid(String s) {
            for (int i = 0; i < s.length(); i++) {
                var c = s.charAt(i);
                switch (c) {
                    case '}' -> {
                        if (this.list.size() == 0 || this.list.getLast() != '{') {
                            return false;
                        }
                        this.list.removeLast();
                    }
                    case ']' -> {
                        if (this.list.size() == 0 || this.list.getLast() != '[') {
                            return false;
                        }
                        this.list.removeLast();
                    }
                    case ')' -> {
                        if (this.list.size() == 0 || this.list.getLast() != '(') {
                            return false;
                        }
                        this.list.removeLast();
                    }
                    default -> this.list.addLast(c);
                }
            }
            return this.list.size() == 0;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
