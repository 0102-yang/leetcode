/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
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
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = INT32_MIN;

        double curTotal = 0.0;
        for (int i = 0; i < k; i++) {
            curTotal += nums[i];
        }
        maxAverage = max(maxAverage, curTotal / k);

        for (int i = k; i < nums.size(); i++) {
            curTotal -= nums[i - k];
            curTotal += nums[i];
            maxAverage = max(maxAverage, curTotal / k);
        }

        return maxAverage;
    }
};
// @lc code=end
