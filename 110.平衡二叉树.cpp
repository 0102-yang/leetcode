/*
 * @Author: Yang
 * @Date: 2020-09-20 16:49:27
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-20 17:24:52
 * @Email: 1657375983@qq.com
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

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
    bool isBalanced(TreeNode *root) {
        if (height(root) < 1) {
            return true;
        }

        if (abs(height(root->left) - height(root->right)) >= 2) {
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);
    }

   private:
    int height(TreeNode *node) {
        if (node == nullptr) {
            return -1;
        }

        return max(height(node->left), height(node->right)) + 1;
    }
};
// @lc code=end
