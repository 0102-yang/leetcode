/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-15 15:57:36
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-15 20:59:20
 * @FilePath: /leetcode/202.快乐数.cpp
 */
/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
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
    bool isHappy(unsigned n) {
        s.insert(n);
        long tmp = 0;

        while (n > 0) {
            unsigned t = n % 10;
            tmp += (unsigned)pow(t, 2);
            n /= 10;
        }

        if (tmp == 1) {
            return true;
        } else if (s.count(tmp) == 1) {
            return false;
        } else {
            return isHappy(tmp);
        }
    }

   private:
    set<unsigned> s;
};
// @lc code=end
int main() {
    Solution s;
    s.isHappy(19);
}