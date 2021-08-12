/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-15 08:25:00
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-15 08:28:34
 * @FilePath:
 * /Cpp_Primer/home/yang/Documents/leetcode/122.买卖股票的最佳时机-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */
#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;
        int minPrices = INT_MAX;
        int size = prices.size();

        for (int i = 0; i < size; i++) {
            minPrices = min(minPrices, prices[i]);
        }
    }
};
// @lc code=end
