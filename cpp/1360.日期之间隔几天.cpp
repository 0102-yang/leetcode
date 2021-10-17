/*
 * @lc app=leetcode.cn id=1360 lang=cpp
 *
 * [1360] 日期之间隔几天
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
// @lc code=start
class Solution {
   public:
    int daysBetweenDates(string date1, string date2) {
        Date firstDate(date1);
        Date secondDate(date2);

        return abs(firstDate.getDate() - secondDate.getDate());
    }

    class Date {
       public:
        Date(const string& date) { init(date); }

        int getDate() const { return days; }

       private:
        void init(const string& date) {
            int year = transferStr2Num(date.substr(0, 4));
            int month = transferStr2Num(date.substr(5, 2));
            int day = transferStr2Num(date.substr(8, 2));

            if (isLeapYear(year)) {
                monthOfYear.assign(
                    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31});
            } else {
                monthOfYear.assign(
                    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31});
            }

            for (int i = 1971; i < year; i++) {
                if (isLeapYear(i)) {
                    days += 366;
                } else {
                    days += 365;
                }
            }

            for (int i = 0; i < month - 1; i++) {
                days += monthOfYear[i];
            }

            days += (day - 1);
        }

        int transferStr2Num(const string& str) {
            int res = 0;
            for (auto c : str) {
                res *= 10;
                res += (c - '0');
            }
            return res;
        }

        bool isLeapYear(int year) {
            return (((year % 4 == 0) && (year % 100 != 0)) ||
                    (year % 400 == 0));
        }

       private:
        int days = 0;
        vector<int> monthOfYear;
    };
};
// @lc code=end
int main(int argc, char const* argv[]) {
    Solution s;
    auto res = s.daysBetweenDates("2000-01-01", "2001-01-01");
    cout << res << endl;
    return 0;
}
