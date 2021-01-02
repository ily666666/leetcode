//
// Created by bubble on 2020/12/26.
//

//三路快排
//arr[0...zero]==0
//arr[two...n-1]==2
//arr[zero+1...i-1]==1

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
class Solution {
public:
    //时间复杂度O(n)
    //空间复杂度O(1)
    //遍历一次
    void sortColors(vector<int>& nums) {
        int zero=-1;//nums[0...zero]==0
        int two=nums.size();    //nums[two...n-1]==2
        for (int i = 0; i < two; ) {
            if (nums[i]==1)
                i++;
            else if(nums[i]==2){
                two--;
                swap(nums[i],nums[two]);// nums[two]本来是我们没有处理的元素 放到了i的位置，我们下一次循环中要出处理所以i不变
            } else{ //nums[i]==0
                assert( nums[i]==0);
                zero++;
                swap(nums[i],nums[zero]);
                i++;
            }
        }
    }
};
