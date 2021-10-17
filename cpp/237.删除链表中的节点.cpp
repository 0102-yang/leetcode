/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-12-24 12:06:22
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-24 12:21:40
 * @FilePath: /leetcode/237.删除链表中的节点.cpp
 */
/*
 * @lc app=leetcode.cn id=237 lang=cpp
 *
 * [237] 删除链表中的节点
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

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
// @lc code=start

class Solution {
   public:
    void deleteNode(ListNode* node) {
        ListNode* tmp = node->next;
        node->next = tmp->next;
        node->val = tmp->val;
        delete tmp;
    }
};
// @lc code=end
