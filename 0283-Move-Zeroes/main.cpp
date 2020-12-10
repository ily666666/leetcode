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
        for(int i=0;i<nums.size();i++){
            if (nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=k;i<nums.size();i++)
            nums[i]=0;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
