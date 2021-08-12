/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-12 21:58:40
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-12 22:06:09
 * @FilePath: /leetcode/191.位-1-的个数.cpp
 */
/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
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
    int hammingWeight(uint32_t n) {
        int count = 0;
        uint32_t tmp, mask = 1U;

        while (n > 0U) {
            tmp = n & mask;
            if (tmp == mask) count++;
            n >>= 1;
        }

        return count;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    s.hammingWeight(0b01011);

    return 0;
}