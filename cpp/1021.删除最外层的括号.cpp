/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-27 21:00:26
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-04 18:59:27
 * @FilePath: /leetcode/1021.删除最外层的括号.cpp
 */
/*
 * @lc app=leetcode.cn id=1021 lang=cpp
 *
 * [1021] 删除最外层的括号
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
    string removeOuterParentheses(string S) {
        string res;
        int count = 0;
        for (char c : S) {
            if (c == '(' && count++ > 0) res += c;
            if (c == ')' && count-- > 1) res += c;
        }
        return res;
    }
    /* string removeOuterParentheses(string S) {
        string res, tmp;
        stack<char> s;

        for (char c : S) {
            tmp += c;

            if (c == '(')
                s.push(c);
            else
                s.pop();

            if (s.empty()) {
                tmp.erase(tmp.begin());
                tmp.erase(tmp.end() - 1);
                res += tmp;
                tmp = "";
            }
        }

        return res;
    } */
};
// @lc code=end
