/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 16:22:28
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 16:26:11
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/119.杨辉三角-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret;
        for (int i = 0; i < rowIndex + 1; i++) {
            ret.push_back(1);
            for (int j = i - 1; j > 0; j--) {
                ret[j] = ret[j] + ret[j - 1];
            }
        }
        return ret;
    }
};
// @lc code=end
