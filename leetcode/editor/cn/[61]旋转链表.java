package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-10-23 22:39:22
 */
class RotateList {

    public static void main(String[] args) {
        Solution solution = new RotateList().new Solution();
    }

    //leetcode submit region begin(Prohibit modification and deletion)

    /**
     * Definition for singly-linked list.
     * public class ListNode {
     * int val;
     * ListNode next;
     * ListNode() {}
     * ListNode(int val) { this.val = val; }
     * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
     * }
     */
    class Solution {

        public ListNode rotateRight(ListNode head, int k) {
            if (head == null) {
                return null;
            }
            if (k == 0) {
                return head;
            }
            int length = length(head);
            k %= length;

            ListNode tmp = retrieveLastNth(head, k + 1);
            ListNode tail = tmp;
            while (tail.next != null) {
                tail = tail.next;
            }
            tail.next = head;
            head = tmp.next;
            tmp.next = null;
            return head;
        }

        private int length(ListNode head) {
            int count = 0;
            while (head != null) {
                count++;
                head = head.next;
            }
            return count;
        }

        private ListNode retrieveLastNth(ListNode head, int k) {
            ListNode fast = head;
            for (int i = 0; i < k; i++) {
                fast = fast.next;
            }

            while (fast != null) {
                fast = fast.next;
                head = head.next;
            }

            return head;
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
