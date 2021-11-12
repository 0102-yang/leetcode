package leetcode.editor.cn;

import java.util.PriorityQueue;

/**
 * @author yang
 * @date 2021-10-03 16:32:59
 */
class JBjn9C {

    public static void main(String[] args) {

    }

    //leetcode submit region begin(Prohibit modification and deletion)
    class KthLargest {

        private PriorityQueue<Integer> queue;

        private final int k;

        public KthLargest(int k, int[] nums) {
            this.k = k;
            this.queue = new PriorityQueue<>(Math.max(1, nums.length));
            for (int e : nums) {
                this.queue.add(e);
            }
        }

        public int add(int val) {
            this.queue.add(val);
            while (this.queue.size() > this.k) {
                this.queue.poll();
            }
            return this.queue.peek();
        }

    }

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */
//leetcode submit region end(Prohibit modification and deletion)

}
