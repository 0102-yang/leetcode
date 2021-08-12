/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
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
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapRelation1;
        unordered_map<char, char> mapRelation2;

        for (int i = 0; i < s.length(); i++) {
            if (mapRelation1.count(s[i])) {
                if (t[i] != mapRelation1[s[i]]) {
                    return false;
                }
            } else {
                mapRelation1.insert({s[i], t[i]});
            }

            if (mapRelation2.count(t[i])) {
                if (s[i] != mapRelation2[t[i]]) {
                    return false;
                }
            } else {
                mapRelation2.insert({t[i], s[i]});
            }
        }

        return true;
    }
};
// @lc code=end
