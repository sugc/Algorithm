/*
给定一个长度为 n 的整数数组 height 。有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和 (i, height[i]) 。

找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

返回容器可以储存的最大水量。

说明：你不能倾斜容器。

 

示例 1：



输入：[1,8,6,2,5,4,8,3,7]
输出：49 
解释：图中垂直线代表输入数组 [1,8,6,2,5,4,8,3,7]。在此情况下，容器能够容纳水（表示为蓝色部分）的最大值为 49。
示例 2：

输入：height = [1,1]
输出：1


提示：

n == height.length
2 <= n <= 105
0 <= height[i] <= 104

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/container-with-most-water
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/

/*
解题思路：

1, 暴力方式，遍历两次，复杂度O(n2)

2， 使用递归方式, 对于数组F(0,n),
 假设i，j 有 0 <= i < j <= n.
 用count(i,j) =  (i - j) * min(F[i], F[j]) 表示这两个点存水容量
 

max F(i, j) = {
    
    c1 = count(i, j) 
   
    return max(c1, max F(i + 1, j), max F(i, j -1));

}

3, 双指针方式，最优


*/

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        


    }
};