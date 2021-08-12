/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-17 16:20:03
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 22:09:07
 * @FilePath: /Cpp_Primer/home/yang/Documents/leetcode/225.用队列实现栈.cpp
 */
/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// @lc code=start
class MyStack {
   public:
    /** Initialize your data structure here. */
    MyStack() {}

    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
        auto size = q.size();
        for (size_t i = 1UL; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
    }

    /** Get the top element. */
    int top() { return q.front(); }

    /** Returns whether the stack is empty. */
    bool empty() { return q.empty(); }

   private:
    queue<int> q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end