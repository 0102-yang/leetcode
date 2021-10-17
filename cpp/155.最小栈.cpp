/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2021-01-09 22:47:49
 * @LastEditors: Yang
 * @LastEditTime: 2021-01-10 14:58:18
 * @FilePath: /leetcode/155.最小栈.cpp
 */
/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
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
// @lc code=start
/* class MinStack {
   public:
    MinStack() { this->head = new ListNode; }

    ~MinStack() {
        while (!this->head->next) this->pop();
    }

    void push(int x) {
        ListNode* tmp = new ListNode(x, head->next);
        this->head->next = tmp;
    }

    void pop() {
        ListNode* tmp = this->head->next;
        this->head->next = tmp->next;
        delete tmp;
        tmp = nullptr;
    }

    int top() { return this->head->next->val; }

    int getMin() {
        int min = INT32_MAX;
        ListNode* tmp = this->head->next;
        while (tmp) {
            if (tmp->val < min) min = tmp->val;
            tmp = tmp->next;
        }
        return min;
    }

   private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int val = 0, ListNode* next = nullptr)
            : val(val), next(next) {}
    };

    ListNode* head;
}; */

class MinStack {
   private:
    stack<int> s1;
    stack<int> s2;

   public:
    void push(int x) {
        s1.push(x);
        if (s2.empty() || x <= getMin()) s2.push(x);
    }
    void pop() {
        if (s1.top() == getMin()) s2.pop();
        s1.pop();
    }
    int top() { return s1.top(); }
    int getMin() { return s2.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
int main() {
    MinStack m;
    m.push(20);
    m.push(30);
    m.push(40);
    cout << m.top() << endl;
    cout << m.getMin() << endl;
    return 0;
}