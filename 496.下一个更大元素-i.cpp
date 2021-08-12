/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
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
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> umap;
        vector<int> res(nums1.size(), -1);
        int element;

        for (int i = 0; i < nums2.size(); i++) {
            element = nums2[i];

            while (!s.empty() && element > s.top()) {
                umap[s.top()] = element;
                s.pop();
            }

            s.push(element);
        }

        for (int i = 0; i < nums1.size(); i++) {
            auto itr = umap.find(nums1[i]);
            if (itr != umap.end()) {
                res[i] = itr->second;
            }
        }

        return res;
    }
};
// @lc code=end
int main(int argc, char const* argv[]) {
    vector<int> v1{4, 1, 2}, v2{1, 3, 4, 2};
    Solution s;
    auto v = s.nextGreaterElement(v1, v2);
    return 0;
}
