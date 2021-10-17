/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-20 21:01:07
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-20 21:21:14
 * @FilePath: /leetcode/326.3-的幂.cpp
 */
/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
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
    /* bool isPowerOfThree(int n) {
        if (n <= 0) return false;

        while (true) {
            if (n == 3 || n == 1) return true;
            if (n % 3 != 0) return false;
            n /= 3;
        }

        return false;
    } */

    bool isPowerOfThree(int n) { return (fmod(log10(n) / log10(3), 1) == 0); }
};
// @lc code=end
int main(int argc, char const *argv[]) {
    Solution s;
    s.isPowerOfThree(19684);

    return 0;
}