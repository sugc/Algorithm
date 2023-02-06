
/*
冒泡排序
*/

#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> bubbleSortArray(vector<int>& nums) {

        for (int i = nums.size() - 1; i > 0; i--)
        {
           for (int j = 0; j < i; j++)
           {
             if (nums[j] > nums[j+1])
             {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
             }
           }
        }
        return nums;
    }
};