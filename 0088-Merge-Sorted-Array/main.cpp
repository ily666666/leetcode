//
// Created by bubble on 2020/12/26.


//

/**
 * 给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。


说明：

初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <iostream>
#include <vector>

//来个冒泡排序
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i,j;
        j=0;
        while (j<n){
            nums1[m+j]=nums2[j];
            j++;
        }
        for ( i = 0; i < nums1.size()-1; ++i) {
            for ( j = 0; j < nums1.size()-i-1; ++j) {
                if (nums1[j]>nums1[j+1])
                    swap(nums1[j],nums1[j+1]);

            }
        }
    }
};