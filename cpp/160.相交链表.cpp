/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-19 13:51:18
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-19 14:27:18
 * @FilePath: /leetcode/160.相交链表.cpp
 */
/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /* set<ListNode *> res;

        while (headA || headB) {
            if (headA) {
                if (res.find(headA) == res.end())
                    res.insert(headA);
                else
                    return headA;
                headA = headA->next;
            }

            if (headB) {
                if (res.find(headB) == res.end())
                    res.insert(headB);
                else
                    return headB;
                headB = headB->next;
            }
        }

        return nullptr; */
        auto currA = headA, currB = headB;
        int countA = 0, countB = 0;

        while (currA) {
            currA = currA->next, countA++;
        }
        while (currB) {
            currB = currB->next, countB++;
        }

        int diff = std::abs(countA - countB);
        if (countB > countA) {
            swap(headA, headB);
        }

        while (diff--) {
            headA = headA->next;
        }
        while (headA != headB) {
            headA = headA->next, headB = headB->next;
        }
        return headA;
    }
};
// @lc code=end
