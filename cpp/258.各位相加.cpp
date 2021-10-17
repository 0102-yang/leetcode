/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
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
    /* int addDigits(int num) {
        int tmp;
        while (num >= 10) {
            tmp = 0;
            while (num > 0) {
                tmp += (num % 10);
                num /= 10;
            }
            num = tmp;
        }
        return num;
    } */
    int addDigits(int num) {
        if (num % 9 == 0 && num != 0) {
            return 9;
        }
        return num % 9;
    }
};
// @lc code=end
int main(int argc, char const *argv[]) {
    Solution s;
    s.addDigits(38);
    return 0;
}
