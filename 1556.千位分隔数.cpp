/*
 * @lc app=leetcode.cn id=1556 lang=cpp
 *
 * [1556] 千位分隔数
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
    string thousandSeparator(int n) {
        if (n == 0) {
            return string("0");
        }

        string res;
        int count = 0;
        while (n > 0) {
            int t = n % 10;
            n /= 10;

            res.push_back((char)('0' + t));

            if ((++count) % 3 == 0 && n != 0) {
                res.push_back('.');
                count = 0;
            }
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
