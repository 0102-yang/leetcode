/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-15 08:48:57
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-15 09:16:52
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/136.只出现一次的数字.cpp
 */
/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for (auto num : nums) single ^= num;
        return single;
    }
};
// @lc code=end
int main() {
    vector<int> v{1, 2, 2, 3, 3, 4, 4};
    Solution s;
    s.singleNumber(v);
}