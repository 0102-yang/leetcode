/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, unordered_multiset<string>> m;
        vector<vector<string>> res;
        int hash;

        for (const auto& s : strs) {
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            m[tmp].insert(s);
        }

        for (auto& pair : m) {
            res.emplace_back(pair.second.begin(), pair.second.end());
        }

        return res;
    }
};
// @lc code=end
