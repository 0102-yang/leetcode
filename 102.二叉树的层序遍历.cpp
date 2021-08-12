/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-26 17:30:55
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-26 21:21:42
 * @FilePath: /undefined/home/yang/Documents/leetcode/102.二叉树的层序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ret;
        if (root == nullptr) return ret;
        queue<TreeNode *> q;
        TreeNode *curr;
        q.push(root);

        while (!q.empty()) {
            vector<int> tv;
            queue<TreeNode *> tq;
            while (!q.empty()) {
                curr = q.front();
                tv.push_back(curr->val);
                if (curr->left != nullptr) tq.push(curr->left);
                if (curr->right != nullptr) tq.push(curr->right);
                q.pop();
            }
            q = move(tq);
            ret.push_back(move(tv));
        }

        return ret;
    }
};
// @lc code=end
