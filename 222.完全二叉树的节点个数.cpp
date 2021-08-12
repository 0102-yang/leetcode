/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-11-18 22:46:05
 * @LastEditors: Yang
 * @LastEditTime: 2020-11-18 23:12:00
 * @FilePath:
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 * /articleParse/home/yang/Documents/leetcode/222.完全二叉树的节点个数.cpp
 */
/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
 */
#include <algorithm>
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
    int countNodes(TreeNode *root) {
        if (!root) return 0;
        int leftDepth = 0, rightDepth = 0;
        for (TreeNode *p = root; p; p = p->left) ++leftDepth;
        for (TreeNode *p = root; p; p = p->right) ++rightDepth;
        if (leftDepth == rightDepth) {
            return (1 << leftDepth) - 1;
        } else {
            return countNodes(root->left) + countNodes(root->right) + 1;
        }
    }
};
/* class Solution {
   private:
    queue<TreeNode *> q;

   public:
    int countNodes(TreeNode *root) {
        int result = 0;
        if (!root) return result;
        TreeNode *temp;

        q.push(root);

        while (!q.empty()) {
            queue<TreeNode *> tempQueue;
            while (!q.empty()) {
                temp = q.front();
                q.pop();
                result++;
                if (temp->left) tempQueue.push(temp->left);
                if (temp->right) tempQueue.push(temp->right);
            }
            q = tempQueue;
        }

        return result;
    }
}; */
// @lc code=end
