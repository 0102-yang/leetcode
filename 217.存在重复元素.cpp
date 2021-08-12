/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-16 14:30:12
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-16 14:43:44
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/217.存在重复元素.cpp
 */
/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() != set<int>(nums.cbegin(), nums.cend()).size();
    }
};
// @lc code=end
