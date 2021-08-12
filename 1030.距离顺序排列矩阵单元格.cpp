/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-05 20:35:19
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-05 20:58:29
 * @FilePath: /leetcode/1030.距离顺序排列矩阵单元格.cpp
 */
/*
 * @lc app=leetcode.cn id=1030 lang=cpp
 *
 * [1030] 距离顺序排列矩阵单元格
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
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        multimap<int, vector<int>> m;
        vector<vector<int>> res;

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                int tmp = abs(i - r0) + abs(j - c0);
                m.insert({tmp, {i, j}});
            }
        }

        for (auto itr : m) {
            res.push_back(itr.second);
        }

        return res;
    }
};
// @lc code=end
