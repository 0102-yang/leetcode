/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-22 20:04:49
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-22 20:19:56
 * @FilePath: /test/home/yang/Documents/leetcode/374.猜数字大小.cpp
 */
/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
   public:
    int guessNumber(int n) {
        vector<int> v;
        for (int i = 1; i <= n; i++) v.push_back(i);

        int count
    }
};
// @lc code=end
