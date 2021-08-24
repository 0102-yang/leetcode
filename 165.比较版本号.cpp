/*
 * @lc app=leetcode.cn id=165 lang=cpp
 *
 * [165] 比较版本号
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
    int compareVersion(string version1, string version2) {
        int size1 = version1.size(), size2 = version2.size();

        for (int i = 0, j = 0; i < size1 || j < size2; i++, j++) {
            string s1, s2;

            while (i < size1 && version1[i] != '.') {
                if (s1.size() == 0 && version1[i] == '0') {
                    i++;
                    continue;
                }
                s1 += version1[i++];
            }

            while (j < size2 && version2[j] != '.') {
                if (s2.size() == 0 && version2[j] == '0') {
                    j++;
                    continue;
                }
                s2 += version2[j++];
            }

            if (s1.size() < s2.size()) {
                return -1;
            } else if (s1.size() > s2.size()) {
                return 1;
            } else {
                int r = s1.compare(s2);
                if (r > 0) {
                    return 1;
                } else if (r < 0) {
                    return -1;
                } else {
                }
            }
        }

        return 0;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    s.compareVersion("1.01", "1.001");

    return 0;
}