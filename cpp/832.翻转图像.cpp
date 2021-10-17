/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-29 14:21:57
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-29 14:47:48
 * @FilePath: /leetcode/832.翻转图像.cpp
 */
/*
 * @lc app=leetcode.cn id=832 lang=cpp
 *
 * [832] 翻转图像
 */
#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <range>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        auto size = A.size();
        auto inline_size = A[0].size();
        for (int i = 0; i < size; i++) {
            reverse(A[i].begin(), A[i].end());
            for (int j = 0; j < inline_size; j++) {
                A[i][j] = 1 - A[i][j];
            }
        }

        return A;
    }
};
// @lc code=end
