/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
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
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num = 0;
        auto size = nums.size();
        for (int i = 0; i < size; i += 2) {
            num += nums[i];
        }
        return num;
    }
};
// @lc code=end
