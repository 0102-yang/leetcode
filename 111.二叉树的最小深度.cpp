/*
 * @Author: Yang
 * @Date: 2020-09-21 16:09:40
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-21 22:00:42
 * @Email: 1657375983@qq.com
 */
/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode *root) {
        if (!root) return 0;

        findMinDepth(root);
        return *min_element(len.begin(), len.end());
    }

   private:
    stack<TreeNode *> s;
    vector<int> len;
    void findMinDepth(TreeNode *root) {
        if (root) {
            s.push(root);

            if (!root->left && !root->right) {
                len.push_back(s.size());
            } else {
                findMinDepth(root->left);
                findMinDepth(root->right);
            }

            s.pop();
        }
    }
};
// @lc code=end
int main() {
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);
    TreeNode *n3 = new TreeNode(3);
    TreeNode *n4 = new TreeNode(4);
    TreeNode *n5 = new TreeNode(5);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    Solution s;
    s.minDepth(n1);
}