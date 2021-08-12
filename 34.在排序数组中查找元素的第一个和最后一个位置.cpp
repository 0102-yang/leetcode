/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
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
    vector<int> searchRange(vector<int>& nums, int target) {
        searchRange(nums, target, 0, nums.size() - 1);
        return {this->begin == INT32_MAX ? -1 : this->begin,
                this->end == INT32_MIN ? -1 : this->end};
    }

   private:
    void searchRange(vector<int>& nums, int target, int begin, int end) {
        if (begin == end && nums[begin] == target) {
            this->begin = min(begin, this->begin);
            this->end = max(end, this->end);
            return;
        }

        if (begin < end && nums[begin] <= target && nums[end] >= target) {
            int mid = (begin + end) >> 1;
            searchRange(nums, target, begin, mid);
            searchRange(nums, target, mid + 1, end);
        }
    }

   private:
    int begin = INT32_MAX;
    int end = INT32_MIN;
};
// @lc code=end
