/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-17 12:31:20
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-17 14:26:36
 * @FilePath: /undefined/home/yang/Documents/leetcode/1576.替换所有的问号.cpp
 */
/*
 * @lc app=leetcode.cn id=1576 lang=cpp
 *
 * [1576] 替换所有的问号
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
    string modifyString(string s) {
        for (auto itr = s.begin(); itr != s.end(); itr++) {
            char left = '\0';
            char right = '\0';

            if (*itr == '?') *itr = 'a';
            if (itr != s.begin()) left = *(itr - 1);
            if (itr != s.end() - 1) right = *(itr + 1);
            while (*itr == left || *itr == right) (*itr)++;
        }
        return s;
    }
};
// @lc code=end
