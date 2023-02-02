/*
给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。

算法的时间复杂度应该为 O(log (m+n)) 。

 

示例 1：

输入：nums1 = [1,3], nums2 = [2]
输出：2.00000
解释：合并数组 = [1,2,3] ，中位数 2
示例 2：

输入：nums1 = [1,2], nums2 = [3,4]
输出：2.50000
解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5
 

 

提示：

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/median-of-two-sorted-arrays
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
解题思路：先合并数组，再根据数组长度去计算

*/


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        vector<int> combine;
        int index1 = 0;
        int index2 = 0;


        while (index1 < nums1.size() || index2 < nums2.size())
        {
           int value;
           if (index1 >= nums1.size())
           {
            value = nums2[index2];
            index2 ++;
            /* code */
           }else if (index2 >= nums2.size())
           {
            /* code */
            value = nums1[index1];
            index1 ++;
           }else {
                if (nums1[index1] > nums2[index2])
                {
                    value = nums2[index2];
                    index2 ++;
                }else {
                    value = nums1[index1];
                    index1 ++;
                }
           }
           combine.push_back(value);
        }
        
        assert(combine.size() > 0);
        
        int index = int(combine.size() / 2) - 1;
        int returnValue = combine[index + 1];
        if (combine.size() % 2 == 0) 
        {
            returnValue = double((combine[index] + combine[index1 + 1]) / 2.0);
        }
        
        

        return returnValue;
    }
};