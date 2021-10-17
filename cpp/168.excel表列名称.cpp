/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-15 09:23:15
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-16 11:27:39
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/168.excel表列名称.cpp
 */
/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
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
    string convertToTitle(int n) {
        string ret;
        while (n > 0) {
            ret = char('A' + (n - 1) % 26) + ret;
            n = (n - 1) / 26;
        }
        return ret;
    }
};
// @lc code=end
int main() {
    Solution s;
    string a = s.convertToTitle(701);
    cout << a << endl;
}