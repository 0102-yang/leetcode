/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
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
    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0) {
            return {};
        }
        // 建立映射关系
        char c = 'a';
        for (int i = 2; i <= 9; i++) {
            int k;
            vector<char> t;
            if (i == 7 || i == 9) {
                k = 4;
            } else {
                k = 3;
            }

            for (int j = 0; j < k; j++) {
                t.push_back(c);
                c = (char)(c + 1);
            }

            map.insert({i, t});
        }

        string s = "";
        backtrack(s, digits, 0);

        return this->res;
    }

   private:
    void backtrack(string& s, const string& digits, int first) {
        if (first == digits.length()) {
            res.push_back(s);
            return;
        }

        auto v = map.find(digits[first] - '0')->second;
        for (char c : v) {
            s.push_back(c);
            backtrack(s, digits, first + 1);
            s.pop_back();
        }
    }

   private:
    unordered_map<int, vector<char>> map;

    vector<string> res;
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    auto res = s.letterCombinations("23");

    return 0;
}