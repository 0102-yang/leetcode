/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, tmp = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                tmp++;
            } else {
                res = max(res, tmp);
                tmp = 0;
            }
        }
        return max(res, tmp);
    }
};
// @lc code=end
