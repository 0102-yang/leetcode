/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入 BST
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
#include <unordered_set>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr)
        : val(val), left(left), right(right) {}
};
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
/* class Solution {
   public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) {
            return false;
        }
        this->theRoot = root;
        this->k = k;

        return tranverse(root);
    }

   private:
    bool tranverse(TreeNode* root) {
        if (!root) {
            return false;
        }

        this->t = root->val;
        this->tmpRoot = root;
        if (validate(theRoot)) {
            return true;
        }
        return tranverse(root->left) || tranverse(root->right);
    }

    bool validate(TreeNode* root) {
        if (!root || root == tmpRoot) {
            return false;
        }

        if (root->val + t == k) {
            return true;
        } else if (root->val + t < k) {
            return validate(root->right);
        } else {
            return validate(root->left);
        }
    }

   private:
    TreeNode* theRoot;
    TreeNode* tmpRoot;
    int k;
    int t;
}; */
class Solution {
   public:
    bool findTarget(TreeNode* root, int k) { return findSum(root, k); }

   private:
    bool findSum(TreeNode* root, int k) {
        if (root == NULL) {
            return false;
        }
        if (elements.count(k - root->val)) {
            return true;
        }
        elements.insert(root->val);
        return findSum(root->left, k) || findSum(root->right, k);
    }

   private:
    unordered_set<int> elements;
};
// @lc code=end
