/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-16 14:46:13
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-16 15:51:28
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/219.存在重复元素-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k <= 0) return false;

        unordered_set<int> us;
        int size = nums.size();
        if (k >= size) k = size - 1;

        for (int i = 0; i < size; i++) {
            if (i > k) us.erase(nums[i - k - 1]);
            if (us.find(nums[i]) != us.cend()) return true;
            us.insert(nums[i]);
        }

        return false;
    }
};
// @lc code=end
int main() {
    vector<int> v{1, 2};
    Solution s;
    s.containsNearbyDuplicate(v, 2);
}