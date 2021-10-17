/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
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
    char findTheDifference(string s, string t) {
        char res = 0;
        for (char c : s) res ^= c;
        for (char c : t) res ^= c;
        return res;
    }
    /* char findTheDifference(string s, string t) {
        unordered_map<char, int> charMapS, charMapT;

        getCharMap(s, charMapS);
        getCharMap(t, charMapT);

        for (auto pair : charMapT) {
            auto itr = charMapS.find(pair.first);
            if (itr == charMapS.end() || itr->second != pair.second) {
                return pair.first;
            }
        }

        return 'a';
    }

   private:
    void getCharMap(const string& s, unordered_map<char, int>& charMap) {
        for (auto e : s) {
            charMap[e]++;
        }
    } */
};
// @lc code=end
