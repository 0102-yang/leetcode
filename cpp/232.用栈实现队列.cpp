/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-20 14:11:27
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-20 14:28:11
 * @FilePath: /test/home/yang/Documents/leetcode/232.用栈实现队列.cpp
 */
/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
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
class MyQueue {
   public:
    /** Initialize your data structure here. */
    MyQueue() {}

    /** Push element x to the back of queue. */
    void push(int x) {
        int size = s.size();
        for (int i = 0; i < size; i++) {
            temp.push(s.top());
            s.pop();
        }

        s.push(x);
        for (int i = 0; i < size; i++) {
            s.push(temp.top());
            temp.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp = s.top();
        s.pop();
        return temp;
    }

    /** Get the front element. */
    int peek() { return s.top(); }

    /** Returns whether the queue is empty. */
    bool empty() { return s.empty(); }

   private:
    stack<int> s;
    stack<int> temp;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
