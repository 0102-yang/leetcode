/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-25 14:45:37
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-25 15:13:53
 * @FilePath: /leetcode/1.两数之和.cpp
 */
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
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
    vector<int> twoSum(vector<int>& nums, int target) {
        /* auto size = nums.size();

        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }

        return {}; */

        unordered_map<int, int> um;
        auto size = nums.size();

        for (int i = 0; i < size; i++) {
            if (um.find(target - nums[i]) != um.end()) {
                return {um[target - nums[i]], i};
            }

            um.insert({nums[i], i});
        }

        return {};
    }
};
// @lc code=end
