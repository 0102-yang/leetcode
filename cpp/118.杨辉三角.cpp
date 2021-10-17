/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-13 15:11:37
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 16:13:19
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/118.杨辉三角.cpp
 */
/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class Solution {
   public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        vector<int> row;
        for (int i = 0; i < numRows; i++) {
            row.push_back(1);
            for (int j = i - 1; j > 0; j--) {
                row[j] = row[j - 1] + row[j];
            }
            result.push_back(row);
        }

        return result;
    }
    //     vector<vector<int>> generate(int numRows) {
    //         vector<vector<int>> v;

    //         if (numRows == 0) return v;
    //         if (numRows >= 1) {
    //             v.push_back({1});
    //         }
    //         if (numRows >= 2) {
    //             v.push_back({1, 1});
    //             for (int i = 2; i < numRows; i++) {
    //                 generate(v, i);
    //             }
    //         }

    //         return v;
    //     }

    //    private:
    //     void generate(vector<vector<int>>& v, int numRows) {
    //         vector<int> temp(numRows + 1);
    //         vector<int> last;
    //         last = v[numRows - 1];

    //         for (int i = 0; i <= numRows; i++) {
    //             if (i == 0 || i == numRows)
    //                 temp[i] = 1;
    //             else
    //                 temp[i] = last[i - 1] + last[i];
    //         }

    //         v.push_back(temp);
    //     }
};
// @lc code=end
int main() {
    Solution s;
    vector<vector<int>> v = s.generate(4);

    return 0;
}