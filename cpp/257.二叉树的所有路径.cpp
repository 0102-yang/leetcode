/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-21 18:36:10
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-27 23:24:21
 * @FilePath: /leetcode/257.二叉树的所有路径.cpp
 */
/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> binaryTreePaths(TreeNode *root) {
        search(root);
        return v;
    }

   private:
    void search(TreeNode *node) {
        if (node == nullptr) return;

        /* find leaf node. */
        s.push_back(node);
        if (node->left == nullptr && node->right == nullptr) {
            pushBack();
            s.pop_back();
            return;
        }

        search(node->left);
        search(node->right);
        s.pop_back();
    }

    void pushBack() {
        string sign = "->";
        ostringstream ret;
        auto size = s.size();

        for (int i = 0; i < size; i++) {
            if (i == 0)
                ret << s[i]->val;
            else
                ret << sign << s[i]->val;
        }

        v.push_back(ret.str());
    }

   private:
    deque<TreeNode *> s;
    vector<string> v;
};
// @lc code=end
int main() {
    TreeNode t5(5);
    TreeNode t3(3);
    TreeNode t2(2);
    TreeNode t1(1);
    t1.left = &t2;
    t1.right = &t3;
    t2.right = &t5;

    Solution s;
    s.binaryTreePaths(&t1);
}