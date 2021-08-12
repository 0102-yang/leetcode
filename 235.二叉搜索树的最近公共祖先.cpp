/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-27 21:07:55
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-28 01:48:39
 * @FilePath: /leetcode/235.二叉搜索树的最近公共祖先.cpp
 */
/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */
#include <algorithm>
#include <cmath>
#include <functional>
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
    TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr)
        : val(val), left(left), right(right) {}
};
// @lc code=start

class Solution {
   public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        tmp1 = p;
        tmp2 = q;

        return search(root);
    }

   private:
    TreeNode* search(TreeNode* node) {
        if (node->val > tmp1->val && node->val > tmp2->val)
            return search(node->left);
        if (node->val < tmp1->val && node->val < tmp2->val)
            return search(node->right);

        return node;
    }

   private:
    TreeNode* tmp1 = nullptr;
    TreeNode* tmp2 = nullptr;
};
// @lc code=end
int main(int argc, char* argv[]) { return 0; }