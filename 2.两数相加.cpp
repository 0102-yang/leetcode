/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
#include <unordered_map>
#include <unordered_set>
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
    /* ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto res = new ListNode;
        auto end = res;
        bool addOn = false;
        int tmp;

        while (l1 && l2) {
            tmp = l1->val + l2->val + (addOn ? 1 : 0);

            if (tmp > 9) {
                addOn = true;
                tmp -= 10;
            } else {
                addOn = false;
            }

            auto tmpNode = new ListNode(tmp);
            end->next = tmpNode;
            end = tmpNode;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1) {
            tmp = l1->val + (addOn ? 1 : 0);

            if (tmp > 9) {
                addOn = true;
                tmp -= 10;
            } else {
                addOn = false;
            }

            auto tmpNode = new ListNode(tmp);
            end->next = tmpNode;
            end = tmpNode;

            l1 = l1->next;
        }
        while (l2) {
            tmp = l2->val + (addOn ? 1 : 0);

            if (tmp > 9) {
                addOn = true;
                tmp -= 10;
            } else {
                addOn = false;
            }

            auto tmpNode = new ListNode(tmp);
            end->next = tmpNode;
            end = tmpNode;

            l2 = l2->next;
        }

        if(addOn){
            auto tmpNode = new ListNode(1);
            end->next = tmpNode;
        }

        return res->next;
    } */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL and l2 == NULL)
            return NULL;
        else if (l1 == NULL)
            return l2;
        else if (l2 == NULL)
            return l1;

        int a = l1->val + l2->val;
        ListNode* p = new ListNode(a % 10);
        p->next = addTwoNumbers(l1->next, l2->next);
        if (a >= 10) p->next = addTwoNumbers(p->next, new ListNode(1));
        return p;
    }
};
// @lc code=end
int main(int argc, char* argv[]) {
    auto l13 = new ListNode(3);
    auto l14 = new ListNode(4, l13);
    auto l12 = new ListNode(2, l14);

    auto l24 = new ListNode(4);
    auto l26 = new ListNode(6, l24);
    auto l25 = new ListNode(5, l26);

    Solution s;
    s.addTwoNumbers(l12, l25);

    return 0;
}