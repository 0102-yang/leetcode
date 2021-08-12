/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-15 08:35:54
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-15 08:47:04
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/125.验证回文串.cpp
 */
/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
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
    bool isPalindrome(string s) {
        string ret = transform(s);
        auto begin = ret.cbegin();
        auto end = ret.cend() - 1;

        while (begin < end) {
            if (*begin++ != *end--) return false;
        }

        return true;
    }

   private:
    string transform(string s) {
        string ret;
        for (auto& c : s) {
            if (isupper(c)) c = tolower(c);
            if (isalpha(c) || isdigit(c)) ret.push_back(c);
        }
        return ret;
    }
};
// @lc code=end
int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution so;
    so.isPalindrome(s);
    return 0;
}