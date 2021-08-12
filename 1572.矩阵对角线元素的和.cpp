/*
 * @lc app=leetcode.cn id=1572 lang=cpp
 *
 * [1572] 矩阵对角线元素的和
 */
#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        for (int i = 0; i < mat.size(); i++) {
            vector<int>& row = mat[i];
            res += (row[i] + row[row.size() - 1 - i]);
        }
        if (mat.size() % 2 != 0) {
            int i = mat.size() / 2;
            res -= mat[i][i];
        }
        return res;
    }
};
// @lc code=end
int main(int argc, char const* argv[]) {
    Solution s;
    vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    s.diagonalSum(v);
    return 0;
}
