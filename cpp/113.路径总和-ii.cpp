/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-29 08:27:52
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-29 09:14:38
 * @FilePath: /leetcode/113.路径总和-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        traversal(root, sum);
        return ret;
    }

   private:
    void traversal(TreeNode *node, int sum) {
        if (node == nullptr) return;

        d.push_back(node);
        int temp = node->val;
        if (node->left == nullptr && node->right == nullptr && temp == sum)
            push();

        traversal(node->left, sum - temp);
        traversal(node->right, sum - temp);
        d.pop_back();
    }

    void push() {
        deque<TreeNode *> temp = d;
        vector<int> v;
        while (!temp.empty()) {
            TreeNode *e = temp.front();
            temp.pop_front();
            v.push_back(e->val);
        }
        ret.push_back(move(v));
    }

   private:
    deque<TreeNode *> d;
    vector<vector<int>> ret;
};
// @lc code=end
int main() {
    TreeNode t2(2);
    TreeNode t3(3);
    TreeNode t1(1, &t2, &t3);
    Solution s;
    s.pathSum(&t1, 3);
}