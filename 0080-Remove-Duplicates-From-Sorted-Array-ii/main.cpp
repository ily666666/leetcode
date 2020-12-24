//
// Created by bubble on 2020/12/13.
//

/***
 * 给定一个增序排列数组 nums ，你需要在 原地 删除重复出现的元素，使得每个元素最多出现两次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */


#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int count=1;
        for (int i = 1; i < nums.size(); ++i) {
            cout<<count<<" ";
            if (nums[i]==nums[i-1]){
                count+=1;
                if (count>2){
                    nums.erase(nums.begin()+i);
                    i=i-1;
                    count-=1;//这个可有可无
                }
            }
            else count=1;
        }
        return nums.size();
    }
};
int main() {

    int arr[]={1,1,1,2,2,2,2,2,2,3};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(int));
    Solution().removeDuplicates(vec);

    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    vec.erase(vec.begin());
    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}
