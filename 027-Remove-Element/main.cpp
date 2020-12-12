//
// Created by bubble on 2020/12/12.
#include <iostream>
#include <vector>

using namespace std;

/***
 * 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-element
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
//

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=val)
                if(i!=k){
                    nums[k]=nums[i];
                    k++;
                } else
                    k++;


        }
        return k;
    }

};

int main(){

    int arr[]={0,1,1,0,3,12};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(int));
    Solution().removeElement(vec,1);
    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;
}
