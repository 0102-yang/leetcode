/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-09 16:56:30
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-09 17:06:53
 * @FilePath: /leetcode/141.环形链表.cpp
 */
/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x, ListNode *next = nullptr) : val(x), next(next) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
   public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> s;

        while (head) {
            if (s.find(head) != s.end())
                return true;
            else
                s.insert(head);

            head = head->next;
        }

        return false;
    }
};
// @lc code=end
int main(int argc, char *argv[]) {
    ListNode l4(-4);
    ListNode l0(0, &l4);
    ListNode l2(2, &l0);
    ListNode l3(3, &l2);
    l4.next = &l2;

    Solution s;
    s.hasCycle(&l3);

    return 0;
}