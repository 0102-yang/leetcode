/*
 * @lc app=leetcode.cn id=1582 lang=cpp
 *
 * [1582] 二进制矩阵中的特殊位置
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
    int numSpecial(vector<vector<int>>& mat) {
        auto rowSize = mat.size();
        auto colSize = mat[0].size();
        vector<int> row(rowSize, 0), col(colSize, 0);

        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                if (mat[i][j] == 1) {
                    row[i]++, col[j]++;
                }
            }
        }

        int res = 0;
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
                    res++;
                }
            }
        }
        return res;
    }
};
// @lc code=end
