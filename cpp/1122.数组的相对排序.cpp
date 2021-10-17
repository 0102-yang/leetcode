/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
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
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> pairs;
        multiset<int> last_order;
        for (auto i : arr1) {
            if (count(arr2.begin(), arr2.end(), i)) {
                pairs[i]++;
            } else {
                last_order.insert(i);
            }
        }

        int itr = 0;
        for (auto i : arr2) {
            int count = pairs.find(i)->second;
            for (int j = 0; j < count; j++) {
                arr1[itr++] = i;
            }
        }

        for (auto i : last_order) {
            arr1[itr++] = i;
        }

        return arr1;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    Solution s;
    vector<int> arr1{28, 6, 22, 8, 44, 17};
    vector<int> arr2{22, 28, 8, 6};
    s.relativeSortArray(arr1, arr2);

    return 0;
}