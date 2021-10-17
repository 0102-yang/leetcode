/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
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
    bool isSubsequence(string s, string t) {
        int i = 0;
        auto sizeOfT = t.size(), sizeOfS = s.size();
        for (int j = 0; i < sizeOfT && j < sizeOfT; j++) {
            if (s[i] == t[j]) {
                i++;
            }
        }
        return i == sizeOfS;
    }
};
// @lc code=end
