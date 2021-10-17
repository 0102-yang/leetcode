/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-29 09:26:16
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-29 11:00:01
 * @FilePath: /leetcode/437.路径总和-iii.cpp
 */
/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
 */
#include <algorithm>
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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
   public:
    int pathSum(TreeNode *root, int sum) {
        if (root) {
            countPath(root, sum);
            pathSum(root->left, sum);
            pathSum(root->right, sum);
        }
        return ret;
    }

   private:
    void countPath(TreeNode *root, int sum) {
        if (root == nullptr) return;

        if (root->val == sum) ++ret;
        countPath(root->left, sum - root->val);
        countPath(root->right, sum - root->val);
    }

   private:
    int ret = 0;
};
// @lc code=end
int main(int argc, char const *argv[]) {
    Solution s;
    TreeNode t1(1);
    TreeNode t2(2);
    TreeNode t3(3, &t1, &t2);
    s.pathSum(&t3, 4);

    return 0;
}