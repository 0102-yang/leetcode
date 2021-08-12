/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
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
    int hammingDistance(int x, int y) {
        int res = 0;
        while (x != 0 || y != 0) {
            if ((x & 1) != (y & 1)) {
                res++;
            }
            x >>= 1;
            y >>= 1;
        }
        return res;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    s.hammingDistance(1, 4);

    return 0;
}