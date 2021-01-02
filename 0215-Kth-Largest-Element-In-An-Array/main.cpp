//
// Created by bubble on 2021/1/2.
//
/**
 * 在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:


    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),[](int a, int b) {
            return a > b;
        });
        int i=1;
        int res;
        res = nums[0];
        while (i<nums.size() && k>1){
            if (nums[i]<res){
                res=nums[i];

            }
            i++;
            if (i==k){
                return res;
            }
        }
        return res;
    }
};

