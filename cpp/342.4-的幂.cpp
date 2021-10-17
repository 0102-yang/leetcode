/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-24 11:59:48
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-24 12:00:39
 * @FilePath: /leetcode/342.4-的幂.cpp
 */
/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
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
    bool isPowerOfFour(int n) { return fmod(log10(n) / log10(4), 1) == 0; }
};
// @lc code=end
