/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-26 16:20:51
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-27 14:58:57
 * @FilePath: /leetcode/94.二叉树的中序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> v;
        stack<TreeNode *> s;

        if (root == nullptr) return v;
        TreeNode *curr = root;
        while (!s.empty() || curr != nullptr) {
            while (curr != nullptr) {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            v.push_back(curr->val);
            curr = curr->right;
        }

        return v;
    }

    // void inorderTraversal(vector<int>& v, TreeNode* root) {
    //     if (root == nullptr) return;
    //     inorderTraversal(v, root->left);
    //     v.push_back(root->val);
    //     inorderTraversal(v, root->right);
    // }
};
// @lc code=end
