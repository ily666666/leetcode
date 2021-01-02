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
//空间复杂度O(n)
//时间复杂度
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums1_copy=nums1;
        int p1=0,p2=0;
        int p=0;
        while (p1<m &&p2<n){
            if (nums1_copy[p1]>nums2[p2]){
                nums1[p]=nums2[p2];
                p++;
                p2++;
            } else{
                nums1[p]=nums1_copy[p1];
                p1++;
                p++;
            }
        }

//        cout<<((&nums1_copy)==(&nums1))<<endl;
//        for (int i=0;i<nums1.size();i++)
//            cout<<nums1[i]<<" ";
//        cout<<endl;
//
//        cout<<p1<<" "<<p2<<" "<<p<<endl;
        while (p2<n){
            nums1[p]=nums2[p2];
            p2++;
            p++;
        }
        while (p1<m){
            nums1[p]=nums2[p1];
            p1++;
            p++;
        }
    }
};
int main() {

    int arr1[]={1};
    vector<int> nums1(arr1, arr1+sizeof(arr1)/sizeof(int));
    int arr2[]={};
    vector<int> nums2(arr2, arr2+sizeof(arr2)/sizeof(int));
//    Solution().removeDuplicates(vec);

    for (int i=0;i<nums1.size();i++)
        cout<<nums1[i]<<" ";
    cout<<endl;

    Solution().merge(nums1,1,nums2,0);
    for (int i=0;i<nums1.size();i++)
        cout<<nums1[i]<<" ";
    cout<<endl;
    return 0;
}
