/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-19 20:46:30
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-19 21:12:53
 * @FilePath: /test/home/yang/Documents/leetcode/226.翻转二叉树.cpp
 */
/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    TreeNode* invertTree(TreeNode* root) {
        invertRoot(root);
        return root;
    }

   private:
    void mySwap(TreeNode*& t1, TreeNode*& t2) {
        TreeNode* tmp = t1;
        t1 = t2;
        t2 = tmp;
    }

    void invertRoot(TreeNode* root) {
        if (root == nullptr) return;
        invertRoot(root->left);
        invertRoot(root->right);
        mySwap(root->right, root->left);
    }
};
// @lc code=end
