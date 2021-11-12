package leetcode.editor.cn;

/**
 * @author yang
 * @date 2021-09-20 21:59:35
 */
class ThreeU1WK4 {

    class ListNode {

        int val;

        ListNode next;

        ListNode() {
        }

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
     * Definition for singly-linked list. public class ListNode { int val; ListNode next;
     * ListNode(int x) { val = x; next = null; } }
     */
    public class Solution {

        public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
            ListNode a = headA;
            ListNode b = headB;

            int lenA = 0;
            int lenB = 0;
            while (a != null) {
                a = a.next;
                lenA++;
            }
            while (b != null) {
                b = b.next;
                lenB++;
            }
            int distance = Math.abs(lenA - lenB);

            a = headA;
            b = headB;
            if (lenA >= lenB) {
                for (int i = 0; i < distance; i++) {
                    a = a.next;
                }
            } else {
                for (int i = 0; i < distance; i++) {
                    b = b.next;
                }
            }

            while (a != null) {
                if (a == b) {
                    return a;
                }
                a = a.next;
                b = b.next;
            }

            return null;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
