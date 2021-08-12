/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 16:28:58
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-15 08:18:14
 * @FilePath:
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 * /Cpp_Primer/home/yang/Documents/leetcode/121.买卖股票的最佳时机.cpp
 */
/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
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
        // 能获取的最大利润
        int maxProfit = 0;
        // 股票最便宜的价格(最适合买进的价格)
        int minPurchasePrice = INT32_MAX;

        /* 动态规划 */
        for (int i = 0; i < prices.size(); i++) {
            // 更新最便宜的价格(更新最佳买进机会)
            minPurchasePrice = min(minPurchasePrice, prices[i]);
            // 更新能获得的最大利润
            maxProfit = max(maxProfit, prices[i] - minPurchasePrice);
        }

        return maxProfit;
    }
    // int maxProfit(vector<int>& prices) {
    //     int maxProfit = 0;
    //     int size = prices.size();

    //     for (int buy = 0; buy < size; buy++) {
    //         if (buy + 1 < size && prices[buy + 1] <= prices[buy]) continue;

    //         for (int sell = buy; sell < size; sell++) {
    //             maxProfit = max(maxProfit, prices[sell] - prices[buy]);
    //         }
    //     }

    //     return maxProfit;
    // }
};
// @lc code=end
