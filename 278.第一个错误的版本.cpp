/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long res;
        long start = 1,end = n;
        while(start<=end){
            int mid = (start+end)/2;
            if(isBadVersion(mid)){
                res = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return res;
    }
};
// @lc code=end

