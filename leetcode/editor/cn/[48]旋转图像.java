// 给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。
//
// 你必须在 原地 旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要 使用另一个矩阵来旋转图像。
//
//
//
// 示例 1：
//
//
// 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
// 输出：[[7,4,1],[8,5,2],[9,6,3]]
//
//
// 示例 2：
//
//
// 输入：matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// 输出：[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
//
//
// 示例 3：
//
//
// 输入：matrix = [[1]]
// 输出：[[1]]
//
//
// 示例 4：
//
//
// 输入：matrix = [[1,2],[3,4]]
// 输出：[[3,1],[4,2]]
//
//
//
//
// 提示：
//
//
// matrix.length == n
// matrix[i].length == n
// 1 <= n <= 20
// -1000 <= matrix[i][j] <= 1000
//
// Related Topics 数组 数学 矩阵
// 👍 956 👎 0

package leetcode.editor.cn;

// author: yang
// createTime: 2021-08-04 17:17:17

class RotateImage {

    public static void main(String[] args) {
        int[][] array = new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        Solution.rotate(array);
    }

    // leetcode submit region begin(Prohibit modification and deletion)
    class Solution {

        public static void rotate(int[][] matrix) {
            for (var line : matrix) {
                Solution.reverseArray(line);
            }

            int length = matrix.length;
            for (int i = 0; i < length - 1; i++) {
                for (int j = 0; j < length - 1 - i; j++) {
                    Solution.swap(matrix, i, j);
                }
            }
        }

        private static void reverseArray(int[] array) {
            int begin = 0, end = array.length - 1;
            while (begin < end) {
                Solution.swap(array, begin++, end--);
            }
        }

        private static void swap(int[] arr, int a, int b) {
            arr[a] = arr[a] ^ arr[b];
            arr[b] = arr[a] ^ arr[b];
            arr[a] = arr[a] ^ arr[b];
        }

        private static void swap(int[][] arr, int a, int b) {
            int i = arr.length - 1 - b;
            int j = arr.length - 1 - a;

            int temp = arr[a][b];
            arr[a][b] = arr[i][j];
            arr[i][j] = temp;
        }

    }
    // leetcode submit region end(Prohibit modification and deletion)

}
