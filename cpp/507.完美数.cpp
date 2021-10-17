/*
 * @lc app=leetcode.cn id=507 lang=cpp
 *
 * [507] 完美数
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
/* class Solution {
   public:
    bool checkPerfectNumber(int num) {
        int end = num / 2;
        vector<int> res;
        res.reserve(end);
        for (int i = 1; i <= end; i++) {
            if (num % i == 0) {
                res.push_back(i);
            }
        }
        return accumulate(res.begin(), res.end(), 0) == num;
    }
}; */

class Solution {
   public:
    bool checkPerfectNumber(int num) {
        int sum = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                sum += i + (i == num / i ? 0 : num / i);
            }
        }
        return sum == num && num != 1;
    }
};
// @lc code=end
