/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-28 19:53:19
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-28 22:11:58
 * @FilePath: /leetcode/206.反转链表.cpp
 */
/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
   public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL;
        while (head) {
            ListNode* next = head->next;
            head->next = cur;
            cur = head;
            head = next;
        }
        return cur;
    }
};
// @lc code=end
