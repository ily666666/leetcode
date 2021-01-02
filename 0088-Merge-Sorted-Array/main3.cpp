//
// Created by bubble on 2020/12/26.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m+n-1,p1=m-1,p2=n-1;
        while(p!=p1)
        {
            if(p1>=0 && nums1[p1]>nums2[p2]) {
                nums1[p]=nums1[p1];
                p--;
                p1--;
            }
            else{
                nums1[p]=nums2[p2];
                p--;
                p2--;
            }

        }
    }
};