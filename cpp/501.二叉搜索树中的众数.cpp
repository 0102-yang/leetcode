/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-29 11:59:04
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-29 12:08:47
 * @FilePath: /leetcode/501.二叉搜索树中的众数.cpp
 */
/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> findMode(TreeNode *root) {
        vector<int> res;

        search(root);

        if (m.empty()) return res;

        int maxI = findMax();

        findRes(res, maxI);

        return res;
    }

   private:
    void search(TreeNode *node) {
        if (!node) return;

        m[node->val]++;
        search(node->left);
        search(node->right);
    }

    int findMax() {
        int max = INTMAX_MIN;
        for (auto ptr : m)
            if (ptr.second > max) max = ptr.second;

        return max;
    }

    void findRes(vector<int> &res, int max) {
        for (auto ptr : m) {
            if (ptr.second == max) res.push_back(ptr.first);
        }
    }

   private:
    unordered_map<int, int> m;
};
// @lc code=end
