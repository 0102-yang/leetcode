/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
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
    int maximumProduct(vector<int>& nums) {
        int i = nums.size() - 1;
        sort(nums.begin(), nums.end());

        return max(nums[i] * nums[i - 1] * nums[i - 2],
                   nums[0] * nums[1] * nums[i]);
    }
};
// @lc code=end
