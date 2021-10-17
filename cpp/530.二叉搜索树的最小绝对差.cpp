/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-29 15:38:45
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-29 20:35:36
 * @FilePath: /leetcode/530.二叉搜索树的最小绝对差.cpp
 */
/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return res;
    }

   private:
    void dfs(TreeNode* curr) {
        if (!curr) return;

        dfs(curr->left);

        if (prev) res = min(res, curr->val - prev->val);
        prev = curr;

        dfs(curr->right);
    }

   private:
    TreeNode* prev = nullptr;

    int res = INT32_MAX;
    /* int getMinimumDifference(TreeNode* root) {
        dfs(root);

        int res = INT32_MAX;
        auto size = this->res.size();
        int tmp;
        for (int i = 0; i < size - 1; i++) {
            tmp = this->res[i + 1] - this->res[i];
            if (tmp < res) res = tmp;
        }

        return res;
    }

   private:
    void dfs(TreeNode* node) {
        if (!node) return;

        dfs(node->left);
        this->res.push_back(node->val);
        dfs(node->right);
    }

   private:
    vector<int> res; */
};
// @lc code=end
