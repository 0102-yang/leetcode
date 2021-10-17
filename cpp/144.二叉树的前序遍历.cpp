/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-26 22:06:32
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-26 23:10:54
 * @FilePath: /undefined/home/yang/Documents/leetcode/144.二叉树的前序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        if (root == nullptr) return ret;
        stack<TreeNode*> s;
        TreeNode* curr = root;

        while (!s.empty() || curr != nullptr) {
            while (curr != nullptr) {
                ret.push_back(curr->val);
                s.push(curr->right);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
        }
        return ret;
    }
};
// @lc code=end
