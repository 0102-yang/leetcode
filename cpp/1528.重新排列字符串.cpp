/*
 * @lc app=leetcode.cn id=1528 lang=cpp
 *
 * [1528] 重新排列字符串
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
    string restoreString(string s, vector<int>& indices) {
        int length = s.length();
        map<int, char> m;

        for (int i = 0; i < length; i++) {
            m.insert({indices[i], s[i]});
        }

        string res;
        for (auto& pair : m) {
            res.push_back(pair.second);
        }

        return res;
    }
};
// @lc code=end
