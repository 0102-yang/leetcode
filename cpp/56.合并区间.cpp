/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& v1, const vector<int>& v2) -> bool {
                 return v1[0] < v2[0];
             });

        vector<vector<int>> res;

        int currentBegin = intervals[0][0], currentEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            auto& v = intervals[i];
            if (v[0] > currentEnd) {
                res.push_back({currentBegin, currentEnd});
                currentBegin = v[0];
                currentEnd = v[1];
            } else if (v[1] > currentEnd) {
                currentEnd = v[1];
            }
        }
        res.push_back({currentBegin, currentEnd});

        return res;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> param = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    s.merge(param);

    return 0;
}