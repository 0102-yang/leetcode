/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
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
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> us;
        for (auto e : candyType) {
            us.insert(e);
        }
        return min(us.size(), candyType.size() >> 1);
    }
};
// @lc code=end
