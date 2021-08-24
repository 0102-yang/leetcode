/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
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
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> chars;

        for (char c : magazine) {
            chars[c]++;
        }

        for (char c : ransomNote) {
            if (chars[c] < 1) {
                return false;
            }
            chars[c]--;
        }

        return true;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    s.canConstruct("aa", "ab");

    return 0;
}