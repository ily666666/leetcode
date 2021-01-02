//
// Created by bubble on 2020/12/24.
//
/***
 * 给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。

此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-colors
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0};
        for (int i = 0; i < nums.size(); ++i) {
            assert(nums[i]>=0&&nums[i]<=2);
            count[nums[i]]++;
        }
//        for (int i = 0; i < 3; ++i) {
//            cout<<count[i]<<" ";
//        }
//        cout<<endl;
        for (int i = 0; i < nums.size(); ++i) {
            if (i<count[0])
                nums[i]=0;
            else if (i<count[0]+count[1])
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};

int main() {

    int arr[]={1,1,0,0,2,1,2,2,0};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(int));

    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    Solution().sortColors(vec);

    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}
