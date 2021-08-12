/*
 * @lc app=leetcode.cn id=783 lang=cpp
 *
 * [783] 二叉搜索树节点最小距离
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

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr)
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
    int minDiffInBST(TreeNode* root) {
        inOrderTraversal(root);
        return minDiff;
    }

   private:
    void inOrderTraversal(TreeNode* root) {
        if (!root) {
            return;
        }

        inOrderTraversal(root->left);
        if (pre) {
            minDiff = min(root->val - pre->val, minDiff);
        }
        pre = root;
        inOrderTraversal(root->right);
    }

   private:
    TreeNode* pre = nullptr;
    int minDiff = INT32_MAX;
};
// @lc code=end
