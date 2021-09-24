package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-20 20:45:55
 */
class UHnkqh {

    class ListNode {
        int val;
        ListNode next;

        ListNode() {}

        ListNode(int val) {
            this.val = val;
        }

        ListNode(int val, ListNode next) {
            this.val = val;
            this.next = next;
        }
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    /**
     * Definition for singly-linked list. public class ListNode { int val; ListNode next; ListNode()
     * {} ListNode(int val) { this.val = val; } ListNode(int val, ListNode next) { this.val = val;
     * this.next = next; } }
     */
    class Solution {
        public ListNode reverseList(ListNode head) {
            return this.recur(head, null);
        }

        private ListNode recur(ListNode cur, ListNode pre) {
            if (cur == null) {
                return pre;
            }
            ListNode res = this.recur(cur.next, cur);
            cur.next = pre;
            return res;
        }
    }
    // leetcode submit region end(Prohibit modification and deletion)

}
