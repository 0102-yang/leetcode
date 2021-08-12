/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-17 14:56:01
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-17 15:08:41
 * @FilePath: /undefined/home/yang/Documents/leetcode/171.excel表列序号.cpp
 */
/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
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
    int titleToNumber(string s) {
        int number = 0;
        for (auto c : s) {
            number *= 26;
            number += int(c - 'A' + 1);
        }
        return number;
    }
};
// @lc code=end
