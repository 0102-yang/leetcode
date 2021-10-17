/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-29 12:21:08
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-29 13:27:47
 * @FilePath: /leetcode/509.斐波那契数.cpp
 */
/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
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
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        vector<int> assist_array{0, 1};
        assist_array.resize(n + 1);

        for (int i = 2; i <= n; i++) {
            assist_array[i] = assist_array[i - 1] + assist_array[i - 2];
        }

        return assist_array[n];
    }
};
// @lc code=end
