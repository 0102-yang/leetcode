/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
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
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            auto itr = lower_bound(res.begin(), res.end(), nums[i]);
            if (itr == res.end()) {
                res.push_back(nums[i]);
            } else {
                *itr = nums[i];
            }
        }
        return res.size();
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    vector<int> value{10, 9, 2, 5, 3, 7, 101, 18};

    return 0;
}