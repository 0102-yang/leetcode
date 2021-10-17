/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-26 22:47:56
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-26 23:22:57
 * @FilePath: /undefined/home/yang/Documents/leetcode/145.二叉树的后序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if (root == nullptr) return ret;
        TreeNode* curr = root;
        stack<TreeNode*> s;

        while (!s.empty() || curr != nullptr) {
            while (curr != nullptr) {
                s.push(curr->left);
                ret.push_back(curr->val);
                curr = curr->right;
            }
            curr = s.top();
            s.pop();
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
// @lc code=end
