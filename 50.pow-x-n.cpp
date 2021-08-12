/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-26 21:05:46
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-26 21:49:42
 * @FilePath: /leetcode/50.pow-x-n.cpp
 */
/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */
#include <algorithm>
#include <cmath>
#include <functional>
#include <iomanip>
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
    double myPow(double x, int n) {
        double res{1.0};

        for (int i = n; i; i /= 2) {
            if (i & 1) res *= x;
            x *= x;
        }

        return n >= 0 ? res : 1 / res;
    }
};
// @lc code=end
int main() {
    Solution s;
    s.myPow(2.0, -2);
}