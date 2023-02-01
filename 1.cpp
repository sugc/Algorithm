
/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

 

示例 1：

输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
示例 2：

输入：nums = [3,2,4], target = 6
输出：[1,2]
示例 3：

输入：nums = [3,3], target = 6
输出：[0,1]
 

提示：

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
只会存在一个有效答案
 

进阶：你可以想出一个时间复杂度小于 O(n2) 的算法吗？

*/






/*
方式1： 暴力解，直接遍历两次，复杂度O(n2)
方式2： 先排序，再去获取target， 排序之后获取解的复杂度是O(n), 此时解的复杂度取决于排序算法,
        可以使用二分和冒泡排序，此时复杂度为O(log2n)
*/




int nums[] = {1,34};

int * getMyTarget(int target, int *nums, int length) {

    if (length < 2)
    {
        /* code */
        return nullptr;
    }
    
    int returnValue[2] = {}; 

    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; i < length; j++)
        {
            /* code */
            if (nums[i] + nums[j] == target)
            {
                /* code */
                returnValue[0] = i;
                returnValue[1] = j;

            }
        }
        /* code */
    }

    return  returnValue;
    
}

/*
排序后的数组，从两端遍历一次即可
此处假设是从小到大排序
*/
int * getMyTargetFromSortedArray(int target, int *nums, int lengh) {

    if (lengh < 2)
    {
        /* code */
        return nullptr;
    }

    int start = 0;
    int end = lengh - 1;
    int returnValue[2] = {}; 

    
    while (start != end)
    {
        int temp = nums[start] + nums[end];
        if (temp == target)
        {
            returnValue[0] = start;
            returnValue[1] = end;
            break;
        }else if (temp < target)
        {
            /* code */
            start ++;

        }else {
            end --;
        }
        
        
    }
    return returnValue;
}