/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
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
    int minPathSum(vector<vector<int>>& grid) {
        tmp.assign(grid.size(), vector<int>(grid[0].size(), -1));
        tmp[0][0] = grid[0][0];

        return minPathSumImplementation(grid, grid.size() - 1,
                                        grid[0].size() - 1);
    }

   private:
    int minPathSumImplementation(vector<vector<int>>& grid, int m, int n) {
        if (m < 0 || n < 0) {
            return max;
        }

        if (tmp[m][n] != -1) {
            return tmp[m][n];
        }

        int t = min(minPathSumImplementation(grid, m - 1, n) + grid[m][n],
                    minPathSumImplementation(grid, m, n - 1) + grid[m][n]);
        tmp[m][n] = t;

        return t;
    }

   private:
    vector<vector<int>> tmp;

    const int max = 1 << 10;
};
// @lc code=end
