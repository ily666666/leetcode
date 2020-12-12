//
// Created by bubble on 2020/12/12.
//
#include <iostream>
#include <vector>
using namespace std;
/***
 * 给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。


 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0; //考虑输入空数组
        for (int i = 0; i < nums.size(); ++i) {
            int key=0;
            for (int j = 0; j < k; ++j) {
                if (nums[i]==nums[j]){
                    key=1;
                    break;
                }
            }
            if(key==0){
                if (i!=k){
                    nums[k]=nums[i];
                    k++;
                } else
                    k++;
            }

        }
        return k;
    }
};

int main(){
    int arr[]={0,1,1,0,3,12};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(int));
    Solution().removeDuplicates(vec);
    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}