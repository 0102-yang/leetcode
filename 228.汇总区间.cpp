/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> r;
        auto size = nums.size();
        for (auto p(0), q(0); q < size; ++q)
            if (q + 1 == size || nums[q + 1] != nums[q] + 1) {
                r.emplace_back(p != q ? to_string(nums[p]) + "->" + to_string(nums[q])
                                      : to_string(nums[p]));
                p = q + 1;
            }
        return r;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums{0, 1, 2, 4, 5, 7};
    s.summaryRanges(nums);

    return 0;
}