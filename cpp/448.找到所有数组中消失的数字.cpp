/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
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
    /* vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> us;
        vector<int> res;
        for (int e : nums) {
            us.insert(e);
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (us.find(i) == us.end()) {
                res.push_back(i);
            }
        }

        return res;
    } */
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> results;

        // Set contents of all indices (minus 1) that appear in the array to be
        // negative
        for (int i = 0; i < nums.size(); ++i) {
            // Note that we have to use the absolute value in the next 2 lines,
            // to avoid trying to access a negative index in some cases
            if (nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }

        // A positive element means that the element (index + 1) does not appear
        // in the array, so save it
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                results.push_back(i + 1);
            }
        }

        return results;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    vector<int> s{4, 3, 2, 7, 8, 2, 3, 1};
    Solution solution;
    solution.findDisappearedNumbers(s);

    return 0;
}