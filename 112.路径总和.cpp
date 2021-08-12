/*
 * @Author: Yang
 * @Date: 2020-09-22 10:32:16
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-27 13:25:04
 * @Email: 1657375983@qq.com
 */
/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
 */
#include <algorithm>
#include <iostream>
#include <queue>
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
    bool hasPathSum(TreeNode *root, int sum) {
        if (!root) return false;

        sum -= root->val;

        if (sum == 0 && !root->left && !root->right) return true;

        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
    //     bool hasPathSum(TreeNode *root, int sum) {
    //         if (!root) {
    //             return false;
    //         }

    //         findPathes(root);
    //         return find(len.cbegin(), len.cend(), sum) != len.cend();
    //     }

    //    private:
    //     stack<TreeNode *> s;
    //     vector<int> len;

    //     void findPathes(TreeNode *root) {
    //         if (root) {
    //             s.push(root);

    //             if (!root->left && !root->right) {
    //                 int temp = accumulate(s);
    //                 len.push_back(temp);
    //             } else {
    //                 findPathes(root->left);
    //                 findPathes(root->right);
    //             }

    //             s.pop();
    //         }
    //     }

    //     int accumulate(stack<TreeNode *> s) {
    //         int sum = 0;
    //         TreeNode *temp;

    //         while (s.size() != 0) {
    //             temp = s.top();
    //             sum += temp->val;
    //             s.pop();
    //         }

    //         return sum;
    //     }
};
// @lc code=end
