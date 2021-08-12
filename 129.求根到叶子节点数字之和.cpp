/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-27 10:46:15
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-27 13:02:48
 * @FilePath: /leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 * /undefined/home/yang/Documents/leetcode/129.求根到叶子节点数字之和.cpp
 */
/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根到叶子节点数字之和
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
    TreeNode* left;
    TreeNode* right;
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
    int sumNumbers(TreeNode* root) {
        inorderTraversal(root);
        return accumulate(v.cbegin(), v.cend(), 0);
    }

   private:
    void inorderTraversal(TreeNode* node) {
        if (node == nullptr) return;
        s.push_back(node);
        if (node->left == nullptr && node->right == nullptr) {
            int e = accumulateDeque(s);
            s.pop_back();
            v.push_back(e);
            return;
        }
        inorderTraversal(node->left);
        inorderTraversal(node->right);
        s.pop_back();
    }

    int accumulateDeque(deque<TreeNode*> d) {
        int ret = 0;
        TreeNode* temp;
        while (!d.empty()) {
            temp = d.front();
            d.pop_front();
            ret *= 10;
            ret += temp->val;
        }
        return ret;
    }

   private:
    vector<int> v;
    deque<TreeNode*> s;
};
// @lc code=end
int main() {
    TreeNode t4(4);
    TreeNode t9(9);
    TreeNode t5(5);
    TreeNode t1(1);
    TreeNode t0(0);

    t4.left = &t9;
    t4.right = &t0;
    t9.left = &t5;
    t9.right = &t1;

    Solution s;
    s.sumNumbers(&t4);
}