package leetcode.editor.cn;

import java.util.ArrayList;

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

/**
 * @author yang
 * @date 2021-10-04 11:09:48
 */
class AMhZSa {

    public static void main(String[] args) {
        Solution solution = new AMhZSa().new Solution();
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

        public boolean isPalindrome(ListNode head) {
            ArrayList<Integer> array = new ArrayList<>();
            ListNode tmpHead = head;
            while (tmpHead != null) {
                array.add(tmpHead.val);
                tmpHead = tmpHead.next;
            }
            return isPalindrome(array, 0, array.size() - 1);
        }

        private boolean isPalindrome(ArrayList<Integer> array, int left, int right) {
            if (left >= right) {
                return true;
            }
            return array.get(left).equals(array.get(right)) && isPalindrome(array, left + 1, right - 1);
        }

    }
//leetcode submit region end(Prohibit modification and deletion)

}
