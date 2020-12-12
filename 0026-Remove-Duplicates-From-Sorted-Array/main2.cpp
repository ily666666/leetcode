//
// Created by bubble on 2020/12/12.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0; //考虑输入空数组
        for (int i = 0; i < nums.size(); ++i) {
            if (i==0){
                k++;
                continue;
            }

            if ( nums[i]==nums[i-1])
                continue;
            else{
                if (i!=k)
                    nums[k]=nums[i];
                k++;
            }

        }
        return k;
    }
};

int main(){
    int arr[]={1,1,2};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(int));
    cout<<Solution().removeDuplicates(vec)<<endl;
    for (int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}