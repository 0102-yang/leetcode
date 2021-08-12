/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
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
    bool wordPattern(string pattern, string s) {
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(s);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (i == n || p2i[pattern[i]] != w2i[word]) return false;
            p2i[pattern[i]] = w2i[word] = i + 1;
        }
        return i == n;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    s.wordPattern("abba", "dog dog dog dog");

    return 0;
}