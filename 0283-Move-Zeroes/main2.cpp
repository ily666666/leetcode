//
// Created by bubble on 2020/12/10.
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    //时间复杂度O(n)
    //空间复杂度O(1)
    void moveZeroes(vector<int> &nums){
        int k=0;//nums中，[0,k)的元素均为非0元素
        //遍历到第i个元素后，保证[0,i]中所有非0元素都按顺序排列在[0,k)中
        for(int i=0;i<nums.size();i++)
            if (nums[i])
                if (i!=k)
                    swap(nums[k++],nums[i]);
                else//i==k
                    k++;

    }
};



int main() {
    std::cout << "Hello, 擦破World!" << std::endl;

    return 0;
}



//

