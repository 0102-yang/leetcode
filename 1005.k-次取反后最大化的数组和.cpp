/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-04 16:29:31
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-04 16:42:37
 * @FilePath: /leetcode/1005.k-次取反后最大化的数组和.cpp
 */
/*
 * @lc app=leetcode.cn id=1005 lang=cpp
 *
 * [1005] K 次取反后最大化的数组和
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
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end());

        int tempVal;
        while (K--) {
            tempVal = pq.top();
            pq.pop();
            pq.push(-tempVal);
        }

        int res = 0;
        while (!pq.empty()) {
            res += pq.top();
            pq.pop();
        }

        return res;
        /* vector<int>::iterator itr;
        for (int i = 0; i < K; i++) {
            itr = min_element(A.begin(), A.end());
            *itr = -*itr;
        }

        return accumulate(A.begin(), A.end(), 0); */
    }
};
// @lc code=end
