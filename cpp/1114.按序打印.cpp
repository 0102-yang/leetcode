/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-11-18 22:36:29
 * @LastEditors: Yang
 * @LastEditTime: 2020-12-26 22:15:09
 * @FilePath: /leetcode/1114.按序打印.cpp
 */
/*
 * @lc app=leetcode.cn id=1114 lang=cpp
 *
 * [1114] 按序打印
 */
#include <algorithm>
#include <condition_variable>
#include <iostream>
#include <map>
#include <mutex>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

// @lc code=start
class Foo {
   public:
    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();

        {
            std::lock_guard lock{mutex_};
            done_first_ = true;
        }

        cv_.notify_all();
    }

    void second(function<void()> printSecond) {
        {
            std::unique_lock lock{mutex_};
            cv_.wait(lock, [this] { return done_first_; });
        }

        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();

        {
            std::lock_guard lock{mutex_};
            done_second_ = true;
        }

        cv_.notify_one();
    }

    void third(function<void()> printThird) {
        {
            std::unique_lock lock{mutex_};
            cv_.wait(lock, [this] { return done_second_; });
        }

        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }

   private:
    bool done_first_{false};
    bool done_second_{false};
    mutable std::mutex mutex_;
    std::condition_variable cv_;
};
// @lc code=end
