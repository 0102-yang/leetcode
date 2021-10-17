/*
 * @Author: Yang
 * @Brief:
 * @Date: 2020-09-17 15:50:40
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-20 16:41:48
 * @Email: 1657375983@qq.com
 */
/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */
#include <algorithm>
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return insert(nums, 0, nums.size() - 1);
    }

   private:
    TreeNode* insert(vector<int>& nums, int start, int end) {
        TreeNode* ret = nullptr;
        if (start <= end) {
            int mid = (start + end) / 2;
            ret = new TreeNode(nums[mid]);
            ret->left = insert(nums, start, mid - 1);
            ret->right = insert(nums, mid + 1, end);
        }

        return ret;
    }
};
// @lc code=end
int main() {
    vector<int> nums{-10, -3, 0, 5, 9};
    Solution s;
    TreeNode* root = s.sortedArrayToBST(nums);
    return 0;
}