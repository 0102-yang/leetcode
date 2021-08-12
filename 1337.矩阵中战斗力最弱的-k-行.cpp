/*
 * @lc app=leetcode.cn id=1337 lang=cpp
 *
 * [1337] 矩阵中战斗力最弱的 K 行
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
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int count, i = 0;
        vector<int> res;

        for (auto& row : mat) {
            count = countRow(row);
            m.insert({count, i++});
        }

        auto itr = m.begin();
        for (int i = 0; i < k; i++) {
            res.push_back((itr++)->second);
        }

        return res;
    }

   private:
    int countRow(const vector<int>& row) {
        int res = 0;
        for (int e : row) {
            if (e == 1) {
                res++;
            } else {
                break;
            }
        }
        return res;
    }

   private:
    multimap<int, int> m;
};
// @lc code=end
