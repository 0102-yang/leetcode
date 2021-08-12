/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-04 16:49:43
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-04 17:11:12
 * @FilePath: /leetcode/1008.前序遍历构造二叉搜索树.cpp
 */
/*
 * @lc app=leetcode.cn id=1008 lang=cpp
 *
 * [1008] 前序遍历构造二叉搜索树
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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
   public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* res = nullptr;
        for (int e : preorder) res = insert(res, e);

        return res;
    }

   private:
    TreeNode* insert(TreeNode* root, int val) {
        if (!root) root = new TreeNode(val);

        if (root->val < val)
            root->right = insert(root->right, val);
        else if (root->val > val)
            root->left = insert(root->left, val);

        return root;
    }
};
// @lc code=end
