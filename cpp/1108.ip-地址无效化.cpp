/*
 * @lc app=leetcode.cn id=1108 lang=cpp
 *
 * [1108] IP 地址无效化
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
    string defangIPaddr(string address) {
        string result;
        for (auto c : address) {
            if (c == '.') {
                result.append("[.]");
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};
// @lc code=end
