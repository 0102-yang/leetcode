/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-28 17:44:38
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-28 17:57:09
 * @FilePath: /leetcode/404.左叶子之和.cpp
 */
/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int val, TreeNode *left = nullptr, TreeNode *right = nullptr)
        : val(val), left(left), right(right) {}
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
   public:
    int sumOfLeftLeaves(TreeNode *root) {
        if (!root) return 0;

        int res = 0;

        if (root->left && (!root->left->left && !root->left->right))
            res += root->left->val;

        res += (sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right));

        return res;
    }
};
// @lc code=end
int main() {
    Solution s;

    TreeNode t7{7};
    TreeNode t15{15};
    TreeNode t20{20, &t15, &t7};
    TreeNode t9{9};
    TreeNode t3{3, &t9, &t20};

    s.sumOfLeftLeaves(&t3);
}