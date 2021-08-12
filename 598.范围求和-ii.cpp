/*
 * @lc app=leetcode.cn id=598 lang=cpp
 *
 * [598] 范围求和 II
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
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for (auto& v : ops) {
            m = min(v[0], m);
            n = min(v[1], n);
        }
        return m * n;
    }
};
// @lc code=end
