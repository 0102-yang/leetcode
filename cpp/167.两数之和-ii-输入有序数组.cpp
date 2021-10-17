/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-19 16:31:20
 * @LastEditors: Yang
 * @LastEditTime: 2021-03-02 18:22:37
 * @FilePath: /leetcode/167.两数之和-ii-输入有序数组.cpp
 */
/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
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
#include <unordered_set>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> result;
        for (int i = 0; i < numbers.size(); i++) {
            if (result.count(target - numbers[i]) > 0) {
                return {result.find(target - numbers[i])->second + 1, i + 1};
            }

            if (result.count(numbers[i]) == 0) {
                result.insert({numbers[i], i});
            }
        }
        return {};
    }
};
// @lc code=end
int main(int argc, char* argv[]) { return 0; }